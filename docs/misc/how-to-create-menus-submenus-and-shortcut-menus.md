---
title: "Procedura: Creare menu, sottomenu e menu di scelta rapida | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "barre dei comandi, architettura"
  - "menu, creazione"
  - "menu, architettura"
  - "comandi, menu"
  - "menu"
ms.assetid: 62004fd9-7f99-4f00-8d01-1dde53e23dbb
caps.latest.revision: 46
caps.handback.revision: 46
manager: "douge"
---
# Procedura: Creare menu, sottomenu e menu di scelta rapida
Per aggiungere un menu all'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di Visual Studio, un pacchetto VSPackage deve usare l'architettura di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] per i menu di gruppi di comandi. Un menu di gruppi di comandi permette la condivisione di comandi da componenti e dall'IDE. Per altre informazioni sui menu di gruppi di comandi, vedere [Come package VS aggiungere elementi dell'interfaccia utente](../Topic/How%20VSPackages%20Add%20User%20Interface%20Elements.md).  
  
 Nei pacchetti VSPackage i menu sono definiti nella sezione [Menus](../Topic/Menus%20Element.md) di un file VSCT. Un file VSCT definisce i menu, le barre degli strumenti, i gruppi e i comandi. Un comando è l'elemento su cui un utente fa clic per eseguire una funzione. Un gruppo è un contenitore di comandi. Un menu è un contenitore di gruppi. Per creare un menu di base, è necessario creare un menu, un gruppo di comandi e almeno un comando.  
  
 Un menu può essere visualizzato in tre modi di base in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]:  
  
-   Come menu sulla barra dei menu principale.  
  
-   Come sottomenu di un altro menu.  
  
-   Come menu di scelta rapida \(in genere visualizzato tramite un clic con il pulsante destro del mouse\).  
  
 Questo argomento descrive come creare ogni tipo di menu. A questo scopo, è possibile usare anche le procedure dettagliate seguenti:  
  
-   [Aggiunta di un Menu alla barra dei Menu di Visual Studio](../Topic/Adding%20a%20Menu%20to%20the%20Visual%20Studio%20Menu%20Bar.md)  
  
-   [Aggiunta di un sottomenu a un Menu](../Topic/Adding%20a%20Submenu%20to%20a%20Menu.md)  
  
-   [Aggiunta di un Menu di scelta rapida in una finestra degli strumenti](../Topic/Adding%20a%20Shortcut%20Menu%20in%20a%20Tool%20Window.md)  
  
### Per creare un menu, un sottomenu o un menu di scelta rapida  
  
1.  Nel progetto fare doppio clic sul file VSCT per aprirlo nell'editor.  
  
     Se il progetto non include un file VSCT, aggiungerne uno. Se si sta creando un pacchetto usando il modello di pacchetto di Visual Studio, selezionare **Comando di menu** per generare un file VSCT.  
  
2.  Nella sezione `Symbols` individuare l'elemento [GuidSymbol](../Topic/GuidSymbol%20Element.md) che contiene i gruppi e i comandi.  
  
3.  Creare un elemento [IDSymbol](../Topic/IDSymbol%20Element.md) per ogni menu, gruppo o comando che si vuole aggiungere, come illustrato nell'esempio seguente.  
  
     [!CODE [ButtonGroup#01](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#01)]  
  
     Gli attributi `name` degli elementi `GuidSymbol` e `IDSymbol` forniscono la coppia GUID:ID per ogni nuovo menu, gruppo o comando. L'oggetto `GUID` rappresenta un set di comandi definito per il pacchetto VSPackage. È possibile definire più set di comandi. Ogni coppia GUID:ID deve essere univoca.  
  
4.  Definire il nuovo menu nella sezione `Menus` nel modo seguente:  
  
    1.  Impostare i campi `guid` e `id` in modo che corrispondano alla coppia GUID:ID del nuovo menu.  
  
    2.  Impostare l'attributo `priority`.  
  
         L'attributo `priority` viene usato dal file VSCT per determinare la posizione del menu tra gli altri oggetti nel gruppo padre.  
  
         I menu con valori di priorità inferiore vengono visualizzati sopra i menu che hanno valori di priorità superiore. Sono consentiti valori di priorità identici, ma la posizione relativa dei menu con la stessa priorità è determinata dall'ordine di elaborazione dei pacchetti VSPackage in fase di esecuzione e tale ordine non può essere predeterminato. Se l'attributo `priority` viene omesso, il suo valore viene impostato su 0.  
  
         Non impostare una priorità per un menu di scelta rapida, perché la sua posizione viene determinata dal codice che lo chiama.  
  
    3.  Per i menu e i sottomenu, impostare l'attributo `type` su `Menu`, che descrive un menu standard. Per i menu di scelta rapida, impostare l'attributo `type` su `Context`.  
  
         Per le descrizioni di altri tipi di menu validi, come le barre degli strumenti e i controller di menu, vedere [Elemento menu](../Topic/Menu%20Element.md).  
  
    4.  Nella definizione del menu creare una sezione [Strings](../Topic/Strings%20Element.md) che include un elemento [ButtonText](../Topic/ButtonText%20Element.md) per contenere il nome del menu come viene visualizzato nell'IDE e un elemento [CommandName](../Topic/CommandName%20Element.md) per contenere il nome del comando usato per accedere al menu nella finestra dicomando.  
  
         Se la stringa di testo del pulsante include il carattere "&", l'utente può aprire il menu premendo ALT più il carattere che segue immediatamente "&".  
  
    5.  Aggiungere flag dei comandi, come appropriato, per modificare l'aspetto e il comportamento del menu. A tale scopo, aggiungere un elemento [CommandFlag](../Topic/Command%20Flag%20Element.md) nella definizione del menu. Per altre informazioni, vedere [Elemento di Flag di comando](../Topic/Command%20Flag%20Element.md).  
  
5.  Impostare l'elemento padre del menu. Per un menu o un sottomenu standard, eseguire una delle due operazioni seguenti, in base alla progettazione:  
  
    -   Nell'elemento `Menu` creare un elemento [Parent](../Topic/Parent%20Element.md) e impostarne i campi `guid` e `id` sulla coppia GUID:ID del gruppo che ospiterà il menu, noto anche come *gruppo padre primario*. Il gruppo padre può essere un gruppo creato nella sezione `Symbols`, un gruppo di un altro pacchetto o un gruppo dell'IDE. Ad esempio, per aggiungere il menu alla barra dei menu di primo livello dell'IDE accanto al menu **Strumenti**, impostare l'elemento padre su guidSHLMainMenu:IDG\_VS\_MM\_TOOLSADDINS.  
  
         L'esempio seguente mostra un menu che verrà visualizzato sulla barra dei menu di Visual Studio.  
  
         [!CODE [TopLevelMenu#01](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#01)]  
  
    -   È possibile omettere l'elemento `Parent` se il menu deve essere posizionato usando un elemento CommandPlacement. Creare una sezione [CommandPlacements](../Topic/CommandPlacements%20Element.md) prima della sezione `Symbols` e aggiungere un elemento [CommandPlacement](../Topic/CommandPlacement%20Element.md) che ha la coppia GUID:ID del menu, una priorità e un elemento padre, come illustrato nell'esempio seguente.  
  
         [!CODE [ButtonGroup#04](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#04)]  
  
         Se si creano più elementi CommandPlacement con la stessa coppia GUID:ID ed elementi padre diversi, un menu viene visualizzato in più posizioni. Per altre informazioni, vedere [Elemento CommandPlacements](../Topic/CommandPlacements%20Element.md).  
  
     Un menu standard deve avere un gruppo nella barra dei menu di Visual Studio come elemento padre. Per un sottomenu, l'elemento padre deve essere un gruppo in un altro menu \(o in una barra degli strumenti o in un altro tipo di menu\). Un menu o un sottomenu da visualizzare deve ospitare un gruppo che contiene almeno un comando attivo o avere il flag di comando `AlwaysCreate` impostato.  
  
     I menu di scelta rapida non hanno elementi padre o elementi CommandPlacement. Devono invece essere attivati nel codice. In genere, un menu di scelta rapida viene attivato in risposta a un clic con il pulsante destro del mouse sulla superficie di un controllo. L'esempio seguente definisce un menu di scelta rapida.  
  
     [!CODE [ButtonGroup#06](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#06)]  
  
6.  Nella sezione [Groups](../Topic/Groups%20Element.md) creare un elemento [Group](../Topic/Group%20Element.md) che contenga i comandi che devono essere visualizzati nel menu. La sezione `Symbols` deve includere una voce con la stessa coppia GUID:ID del nuovo elemento `Group`.  
  
    1.  Impostare la priorità del gruppo in modo che venga visualizzato nelle posizioni desiderate nel menu.  
  
         I limiti di ogni gruppo nel menu verranno visualizzati come linee orizzontali.  
  
    2.  Impostare l'elemento padre per questo nuovo gruppo sulla coppia GUID:ID del menu creato. In questo modo, il gruppo di comandi viene inserito nel menu.  
  
     Il gruppo nell'esempio seguente viene visualizzato nel menu di primo livello mostrato nell'esempio precedente.  
  
     [!CODE [TopLevelMenu#02](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#02)]  
  
     I menu possono contenere sia comandi sia sottomenu. Un sottomenu, chiamato a volte menu a cascata, è un semplice menu, che però viene aggiunto al gruppo di un altro menu ed esposto solo quando viene richiamato l'altro menu. Se il menu mostrato nell'esempio seguente viene inserito in un gruppo nel menu di primo livello, diventa un sottomenu.  
  
     [!CODE [TopLevelMenu#06](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#06)]  
  
7.  Aggiungere comandi al menu creando voci di comando nella sezione [Buttons](../Topic/Buttons%20Element.md) e impostando l'elemento padre di ognuno sulla coppia GUID:ID del gruppo. Ogni elemento [Button](../Topic/Button%20Element.md) deve avere una coppia GUID:ID corrispondente a una voce nella sezione `Symbols`.  
  
     Usare l'attributo `priority` di ogni voce di pulsante per specificare l'ordine in cui vengono visualizzati i comandi nel gruppo.  
  
     L'esempio seguente definisce un comando che verrà visualizzato nel menu di primo livello.  
  
     [!CODE [TopLevelMenu#03](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#03)]  
  
     Per altre informazioni sui pulsanti e le voci di menu, vedere [Elemento Button](../Topic/Button%20Element.md).  
  
     Per informazioni su come implementare comandi di menu nel codice, vedere [Confronto tra oggetti MenuCommand e OleMenuCommand](../misc/menucommands-vs-olemenucommands.md) o le procedure dettagliate citate in precedenza in questo argomento.  
  
### Per attivare un menu di scelta rapida  
  
1.  Ottenere la coppia GUID:ID del menu di scelta rapida. Per impostazione predefinita, il modello di pacchetto crea una classe `GuidList` in un file PkgCmdID.cs per contenere il GUID del set di comandi. Il modello crea anche una classe `PkgCmdIdList` in un file PkgCmdId.cs per contenere i valori ID Integer dei comandi dichiarati nel modello. I menu di scelta rapida e qualsiasi comando aggiuntivo devono essere dichiarati una volta completato il modello. Gli esempi seguenti mostrano queste dichiarazioni.  
  
     [!code-cs[TWShortcutMenu#12](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_8.cs)]  
  
     Questo passaggio può essere omesso se verranno usati direttamente i valori GUID e ID. Tuttavia, è consigliabile impostare i valori a questo punto per motivi di leggibilità.  
  
2.  Associare il menu a un gestore eventi. In genere, i menu di scelta rapida sono associati al clic con il pulsante destro del mouse sulla superficie di un controllo, come illustrato nell'esempio seguente.  
  
     [!code-cs[TWShortcutMenu#43](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_9.cs)]  
  
     Il metodo <xref:System.Windows.Forms.Control.PointToScreen%2A> converte la posizione di clic, relativa al controllo, in posizione nello schermo. Il metodo <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService.ShowContextMenu%2A> visualizza il menu di scelta rapida.  
  
     Il file che contiene il gestore eventi deve includere lo spazio dei nomi <xref:System.ComponentModel.Design> per accedere alla classe <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService> e lo spazio dei nomi <xref:Microsoft.VisualStudio.Shell> per accedere all'interfaccia <xref:System.ComponentModel.Design.IMenuCommandService>.  
  
     [!code-cs[TWShortcutMenu#41](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_10.cs)]  
  
## Vedere anche  
 [Confronto tra oggetti MenuCommand e OleMenuCommand](../misc/menucommands-vs-olemenucommands.md)   
 [Riferimento allo Schema XML VSCT](../Topic/VSCT%20XML%20Schema%20Reference.md)   
 [Estensione menu e comandi](../Topic/Extending%20Menus%20and%20Commands.md)