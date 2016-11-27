.PHONY: clean All

All:
	@echo "----------Building project:[ main - Release ]----------"
	@cd "main" && "$(MAKE)" -f  "main.mk"
clean:
	@echo "----------Cleaning project:[ main - Release ]----------"
	@cd "main" && "$(MAKE)" -f  "main.mk" clean
