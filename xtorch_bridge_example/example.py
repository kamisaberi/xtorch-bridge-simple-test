import xtorch_bridge

# Create model and trainer from C++
model = xtorch_bridge.LeNet5(10)
trainer = xtorch_bridge.Trainer()

trainer.set_max_epochs(1)
trainer.fit(model)

print("Training completed with C++ backend.")