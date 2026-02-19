int main(void)
{
HAL_Init();
SystemClock_Config();
while(1){
HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
HAL_Delay(500);
}}
