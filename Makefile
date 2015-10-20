.PHONY: clean All

All:
	@echo "----------Building project:[ StacksAndQueues - Debug ]----------"
	@cd "StacksAndQueues" && $(MAKE) -f  "StacksAndQueues.mk"
clean:
	@echo "----------Cleaning project:[ StacksAndQueues - Debug ]----------"
	@cd "StacksAndQueues" && $(MAKE) -f  "StacksAndQueues.mk" clean
