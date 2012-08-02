; ------------------------   Translator -------------------------
;Name: Fernando Paladini
;Website: www.techsempre.com
;E-mail: fernandopalad@gmail.com
;Company: Tech Sempre / pCreations
; Enjoy the translation =D
; -------------------------  End -------------------------------------

LoadLanguage_pt_br()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Tradu��o para Portugu�s do Brasil por: Fernando Paladini")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "n�o � poss�vel descompactar arquivos necess�rios para:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Por favor tenha certeza que este programa tem TOTAL ACESSO �s pastas tempor�rias do sistema.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "� necess�rio privil�gios de administrador para gerenciar os servi�os do Freenet. Por favor, verifique se essa conta tem privil�gios de administrador, e se este programa esta sendo executado de modo a permitir que ele use esses privil�gios.")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Erro no instalador da Freenet")
	Trans_Add("Freenet Installer", "Instalador da Freenet")
	Trans_Add("Welcome to the Freenet Installer!", "Bem vindo ao instalador da Freenet!")
	Trans_Add("Installation Problem", "Problema na instala��o")
	Trans_Add("E&xit", "Sair")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet suporta apenas as seguintes vers�es do sistema operacional Windows:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Por favor, instale uma das outras vers�es se voc� deseja usar a Freenet no Windows.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet precisa do Java Runtime Environment para funcionar, mas seu sistema n�o aparenta ter uma vers�o atualizada instalada. Voc� pode instalar o Java usando o instalador online, que ir� baixar e instalar a vers�o mais recente do Java.")
	Trans_Add("&Install Java", "&Instalar Java")
	Trans_Add("The installation will continue once Java version", "A instala��o continuar� quando a vers�o Java")
	Trans_Add("or later has been installed.", "ou mais nova for instalada.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "foi detectado que a Freenet j� est� instalada. Sua instala��o atual foi instalada usando um antigo ou n�o-suportado instalador. Para continuar, voc� primeiro precisa desinstalar sua instala��o antiga usando o desinstalador criado anteriormente.")
	Trans_Add("&Uninstall", "&Desinstalar")
	Trans_Add("The installation will continue once the old installation has been removed.", "&A instala��o continuar� somente quando a velha instala��o for deletada.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Por favor, veja as seguintes configura��es padr�es antes de continuar com a instala��o do Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Diret�rio da Instala��o")
	Trans_Add("&Browse", "Procurar")
	Trans_Add("De&fault", "Pa&dr�o")
	Trans_Add("Freenet requires the installation drive to have at least", "A instala��o da Freenet no computador requer no m�nimo")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MB de espa�o em disco livre. A quantidade atual de espa�o reservada para a Freenet ser� configurada depois da instala��o.")
	Trans_Add("Status:", "Status")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Se voc� n�o escolher uma pasta contendo 'Freenet' no diret�rio, uma pasta ser� criada automaticamente para voc�.")
	Trans_Add("Invalid install path!", "Diret�rio de instala��o inv�lido!")
	Trans_Add("(Too long for file system to handle)", "Arquivo do sistema muito longo para manipular")
	Trans_Add("Not enough free space on installation drive!", "N�o h� espa�o livre no Disco Local que a Freenet est� sendo instalada.")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet j� est� instalada! Por favor unistale a Freenet ou escolha um outro diret�rio primeiro.")
	Trans_Add("Installation directory OK!", "Diret�rio da Instala��o - Ok!")	

	; Installer - Main GUI - System service
	Trans_Add("System service", "Servi�o do Sistema")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "A Freenet ser� executada automaticamente quando o Windows for iniciado. Isso � necess�rio para ser uma parte da rede Freenet, e ser� usado uma quantidade pequena de recursos do sistema. A quantidade de recursos usados do sistema podem ser ajustados ap�s a instala��o. ")

	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Op��es Adicionais")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Iniciar Freenet & Gerenciador de Tarefas no in�cio do Windows")
	Trans_Add("(Recommended)", "Recomendado")
	Trans_Add("Install &start menu shortcuts", "Criar atalhos no &Menu &Iniciar")
	Trans_Add("(Optional)", "Opcional")
	Trans_Add("Install &desktop shortcut", "Criar atalho na &�rea de &Trabalho")
	Trans_Add("Launch Freenet &after the installation", "Executar Freenet &ap�s a instala��o")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Vers�o")
	Trans_Add(" - Build ", "Build")
	Trans_Add("&Install", "&Instalar")

	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Abrir o Gerenciador do 'System Tray' da Freenet na �rea de notifica��o")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Abrir o FreeNet Proxy em um navegador da web")
	Trans_Add("Start Freenet", "Iniciar Freenet")
	Trans_Add("Stop Freenet", "Para Freenet")
	Trans_Add("Installation finished successfully!", "Instala��o finalizada com sucesso")
	Trans_Add("Freenet Installer by:", "Freenet instalador por:")

	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "n�o � capaz de procurar uma porta livre no seu sistema.")
	Trans_Add("Please free a system port in this range to install Freenet.", "Por favor, libere uma porta do sistema nessa 's�rie' para instalar a Freenet.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "n�o � capaz de criar um socket Winsock 2.0 para tester a disponibilidade das portas.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "n�o � poss�vel gravar no diret�rio de instala��o selecionado. Por favor, seleciona outro diret�rio em que a Freenet possa ser instalada.")
	Trans_Add("Error: ", "Erro:")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "n�o foi poss�vel controlar o servi�o do sistema Freenet")
	Trans_Add("Reason:", "Raz�o:")
	Trans_Add("Timeout while managing the service.", "Tempo limite esgotado enquanto gerenciava o servi�o.")
	Trans_Add("Could not access the service.", "N�o foi poss�vel acessar o servi�o.")
	Trans_Add("Service did not respond to signal.", "Servi�o n�o respondeu ao sinal.")

	; Uninstaller
	Trans_Add("Freenet uninstaller", "Desinstalador do Freenet")
	Trans_Add("was unable to recognize your Freenet installation at:", "foi incapaz de reconhecer a instala��o do Freenet em:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Por favor, rode esse programa da pasta 'bin' que est� onde a Freenet foi instalada.")
	Trans_Add("Do you really want to uninstall Freenet?", "Voc� realmente deseja desinstalar a Freenet?")
	Trans_Add("Stopping system service...", "Parando servi�os do sistema...")
	Trans_Add("Shutting down tray managers...", "Desligando gerenciadores de tarefas...")
	Trans_Add("Removing system service...", "Removendo servi�os do sistema...")
	Trans_Add("Removing files...", "Removendo arquivos...")
	Trans_Add("Freenet uninstaller error", "Erro no desinstalador do Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "n�o foi poss�vel deletar os arquivos do Freenet localizados em:")
	Trans_Add("Please close all applications with open files inside this directory.", "Por favor, feche todos os aplicativos abertos a partir dos diret�rios acima.")
	Trans_Add("The uninstallation was aborted.", "A desinstala��o foi abortada.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Por favor, remova manualmente o resto da instala��o da Freenet.")
	Trans_Add("Removing registry modifications...", "Removendo modifica��es no registro...")
	Trans_Add("Freenet has been uninstalled!", "Freenet foi desinstalada!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "n�o foi poss�vel encontrar o seguinte arquivo:")
	Trans_Add("Make sure that you are running", "Tenha certeza que voc� est� executando")
	Trans_Add("from a Freenet installation directory.", "de um diret�rio de instala��o da Freenet.")

	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Se os problemas continuarem ocorrendo, tente reinstalar a Freenet ou reportar esta mensagem de erro aos desenvolvedores.")

	; Launcher
	Trans_Add("Freenet Launcher", "Iniciador da Freenet")
	Trans_Add("Freenet Launcher error", "Erro no 'Iniciador da Freenet'")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "n�o foi poss�vel ler o valor 'fproxy.port' do arquivo de configura��o 'freenet.ini' .")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Op��es de linha de comando (use somente uma):")
	Trans_Add("Hide info messages", "Esconder mensagens de informa��o")
	Trans_Add("Hide info and status messages", "Esconder mensagens de informa��o e status")
	Trans_Add("Return codes:", "Retornar c�digos:")
	Trans_Add("Success", "Sucesso")
	Trans_Add("Error occurred", "Erro aconteceu")
	Trans_Add("(no action)", "Sem a��o")

	; Service starter
	Trans_Add("(service started)", "servi�o iniciado")
	Trans_Add("Service was already running", "Servi�o j� est� sendo executado")
	Trans_Add("Freenet Starter", "Iniciador da Freenet")
	Trans_Add("The Freenet service is starting...", "O servi�o da Freenet est� sendo iniciado...")
	Trans_Add("The Freenet service has been started!", "O servi�o da Freenet foi iniciado!")
	Trans_Add("The Freenet service is already running!", "O servi�o da Freenet j� est� sendo executado!")
	Trans_Add("Freenet Starter error", "Erro no 'Iniciador da Freenet' ")

	; Service stopper
	Trans_Add("(service stopped)", "(servi�o parado)")
	Trans_Add("Service was not running", "Servi�o n�o est� sendo executado")
	Trans_Add("Freenet Stopper", "Parador da Freenet")
	Trans_Add("The Freenet service is stopping...", "O servi�o Freenet est� parando...")
	Trans_Add("The Freenet service has been stopped!", "O servi�o Freenet foi parado!")
	Trans_Add("The Freenet service is already stopped!", "O servi�o Freenet j� foi parado!")
	Trans_Add("Freenet Stopper error", "Erro no 'Parador da Freenet' ")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet na bandeja do sistema")
	Trans_Add("Launch Freenet", "Iniciar Freenet")
	Trans_Add("Start Freenet service", "Come�ar servi�o da Freenet")
	Trans_Add("Stop Freenet service", "Parar servi�o da Freenet")
	Trans_Add("Manual update check", "Chechagem manual de atualiza��es")
	Trans_Add("View logfile", "Ver logfile")
	Trans_Add("About", "Sobre")
	Trans_Add("Exit", "Sair")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Voc� pode buscar, iniciar e parar a Freenet por esse �cone que est� na bandeja do sistema.")
	Trans_Add("Left-click: Start/Browse Freenet", "Bot�o esquerdo do mouse: Iniciar/Buscar Freenet")
	Trans_Add("Right-click: Advanced menu", "Bot�o direito do mouse: Menu avan�ado")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Aviso: Usando a atualiza��o manual ir� atualizar a Freenet e suas ferramentas de ajuda direto do site oficial da Freenet.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet j� est� em um modo de auto-atualiza��o e isto ir� atualiz�-la automaticamente quando necess�rio.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Voc� deve apenas utilizar esta atualiza��o manual se sua instala��o estiver com problemas ou precisar de atualiza��es das ferramentas de ajuda.")
	Trans_Add("Freenet Windows Tray Manager", "Gerenciador do 'System Tray' do Windows")
}