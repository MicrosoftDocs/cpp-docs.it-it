---
title: "Aggiunta guidata variabile membro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.variable.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata variabile membro [C++]"
ms.assetid: 73e8fa99-ac1a-42e2-8fc2-4684b9eb6d4d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta guidata variabile membro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere una dichiarazione di variabile membro al file di intestazione e, a seconda delle opzioni, di aggiungere il codice al file CPP.  Dopo aver aggiunto la variabile membro mediante la procedura guidata è possibile modificare il codice nell'ambiente di sviluppo.  
  
 **Accesso**  
 Consente di impostare l'accesso alla variabile membro.  I modificatori di accesso sono parole chiave che specificano il tipo di accesso di altre classi alla variabile membro.  Per ulteriori informazioni sulla definizione dell'accesso, vedere [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).  Per impostazione predefinita, il livello di accesso alla variabile membro è impostato su **public**.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 **Tipo variabile**  
 Consente di impostare il tipo per la variabile membro che si sta aggiungendo.  
  
-   Per le variabili membro diverse dal controllo finestra di dialogo, selezionare una voce dall'elenco dei tipi disponibili.  
  
     Per informazioni sui tipi, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
    |||  
    |-|-|  
    |`char`|**short**|  
    |**double**|`unsigned char`|  
    |**float**|`unsigned int`|  
    |`int`|`unsigned long`|  
    |**long**||  
  
-   Se si aggiunge una variabile membro per un controllo finestra di dialogo, in questa casella verrà immesso il tipo di oggetto restituito per un controllo o valore.  Se si seleziona **Controllo**, in **Tipo variabile** sarà specificata la classe base del controllo selezionato nella casella **ID controllo**.  Se il controllo finestra di dialogo può contenere un valore e si seleziona **Valore**, in **Tipo variabile** sarà specificato il tipo appropriato per il valore contenuto dal controllo.  Per ulteriori informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).  
  
     Il valore dipende dalla selezione effettuata in **ID controllo** e non può essere modificato.  
  
 **Nome variabile**  
 Consente di impostare il nome della variabile membro che si sta aggiungendo.  Per impostazione predefinita, le variabili membro iniziano con la stringa di identificazione "m\_".  
  
 **Variabile controllo**  
 Consente di specificare che la variabile membro gestisce un controllo in una finestra di dialogo con supporto per [scambio e convalida dei dati](../mfc/dialog-data-exchange-and-validation.md).  Per ulteriori informazioni, vedere [DoDataExchange](../Topic/CWnd::DoDataExchange.md).  L'opzione è disponibile solo per le variabili membro aggiunte alle classi derivate da [CDialog](../mfc/reference/cdialog-class.md).  Selezionare questa casella per attivare le opzioni **ID controllo** e **Tipo controllo**.  
  
 **ID controllo**  
 Consente di impostare l'ID per la variabile di controllo che si sta aggiungendo.  Selezionare dall'elenco l'ID corrispondente al tipo di controllo per il quale si sta aggiungendo la variabile membro.  L'elenco è attivo solo quando si seleziona la casella **Variabile controllo** e contiene unicamente gli ID per i controlli già aggiunti alla finestra di dialogo.  Per il pulsante standard **OK**, ad esempio, l'ID controllo è **IDOK**.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Controllo**|Per impostazione predefinita per il tipo di controllo è selezionata questa opzione.  Consente di gestire il controllo stesso, non lo stato o il contenuto come per una casella di riepilogo, una casella combinata o di testo.|  
|**Valore**|L'opzione è disponibile solo per i tipi di controllo che contengono un valore, come caselle di testo, o che riflettono uno stato, come caselle di controllo, e per i quali è possibile gestire intervallo, contenuto o stato.  Per ulteriori informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).|  
  
 **Categoria**  
 Consente di specificare se la variabile si basa su un tipo di controllo o sul valore del controllo.  
  
 **Tipo di controllo**  
 Consente di impostare il tipo di controllo che si sta aggiungendo  Il testo presente in questa casella non è modificabile.  Il tipo di controllo per un pulsante, ad esempio, è **BUTTON**, mentre per una casella combinata è **COMBOBOX**.  Per ulteriori informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).  
  
 **Numero massimo caratteri**  
 Disponibile solo quando **Tipo variabile** è impostato su [CString](../atl-mfc-shared/reference/cstringt-class.md).  Consente di specificare il numero massimo di caratteri che il controllo può contenere.  
  
 **Valore minimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, [COLECurrency](../mfc/reference/colecurrency-class.md) o [CTime](../atl-mfc-shared/reference/ctime-class.md).  Consente di indicare il valore più basso accettabile per un intervallo di proporzioni o date.  
  
 **Valore massimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, `COLECurrency` o `CTime`.  Consente di indicare il valore più alto accettabile per un intervallo di proporzioni o date.  
  
 **File H**  
 Per i controlli ActiveX le cui variabili membro richiedono una classe wrapper.  Consente di impostare il nome del file di intestazione per aggiungere la dichiarazione di classe.  
  
 **File CPP**  
 Per i controlli ActiveX le cui variabili membro richiedono una classe wrapper.  Consente di impostare il nome del file di implementazione per aggiungere la definizione di classe.  
  
 **Commento**  
 Consente di riportare un commento nel file di intestazione per la variabile membro.  
  
## Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)