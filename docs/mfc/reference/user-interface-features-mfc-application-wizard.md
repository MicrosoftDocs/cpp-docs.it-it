---
title: "Funzionalità interfaccia utente, creazione guidata applicazione MFC | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.ui
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard, user interface features
ms.assetid: 59e7b829-a665-42eb-be23-3f2a36eb2dad
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5906cf607e09df536825eed88e7b1be59d8fdee2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="user-interface-features-mfc-application-wizard"></a>Funzionalità interfaccia utente, Creazione guidata applicazione MFC
In questo argomento illustra le opzioni che è possibile utilizzare per specificare l'aspetto dell'applicazione. Le funzionalità dell'interfaccia utente disponibili per il progetto dipendono dal tipo di applicazione specificato nella [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC. Ad esempio, se si crea un'applicazione single document interface, è possibile aggiungere stili dei frame figlio.  
  
 **Stili del frame principale**  
 Imposta le funzionalità di cornice della finestra principale dell'applicazione.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Frame con bordo spesso**|Crea una finestra che ha un bordo di ridimensionamento. Valore predefinito.|  
|**Ridurre al minimo casella**|Include una finestra ridotta a icona nella finestra cornice principale. Valore predefinito.|  
|**Pulsante di ingrandimento**|Include un pulsante di ingrandimento nella finestra cornice principale. Valore predefinito.|  
|**Ridotta a icona**|Apre la finestra cornice principale come un'icona.|  
|**Ingrandita**|Verrà visualizzata la finestra cornice principale per la dimensione totale dello schermo.|  
|**Menu di sistema**|Include un menu di sistema nella finestra cornice principale. Valore predefinito.|  
|**Finestra informazioni su**|Include un **su** casella per l'applicazione. L'utente può accedere a questa casella dell'applicazione **Guida** menu. Il valore predefinito e non sarà possibile modificarla solo se si seleziona **basato su finestra di dialogo**nella [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina.<br /><br /> **Nota** indica che la procedura guidata non applicare l'opzione per il progetto, se è selezionata o deselezionata la casella di controllo dell'elemento non disponibile in genere, un'opzione non è disponibile. In questo caso, la procedura guidata aggiunge sempre un **su** casella al progetto solo se si specifica innanzitutto il progetto come finestra di dialogo in base e quindi deselezionare la casella di controllo.|  
|**Barra di stato iniziale**|Aggiunge una barra di stato per l'applicazione. La barra di stato contenente indicatori automatici per i tasti della tastiera BLOC MAIUSC, BLOC NUM e BLOC SCORR e stringhe di un messaggio che visualizza la Guida per i comandi di menu e barra degli strumenti pulsanti. Se si seleziona questa opzione aggiunge anche i comandi di menu per visualizzare o nascondere la barra di stato. Per impostazione predefinita, un'applicazione include una barra di stato. Non è disponibile per i tipi di applicazioni basate su finestra di dialogo.|  
|**Finestra divisa**|Fornisce una barra di divisione. La barra di divisione divide visualizzazioni principali dell'applicazione. In un'applicazione MDI (interfaccia) di documenti multipli, finestra client del frame MDI figlio è una finestra con separatore, e in un'applicazione single document interface (SDI) e applicazione multiple document di livello superiore, finestra di client del frame principale è una finestra con separatore. Non è disponibile per i tipi di applicazioni basate su finestra di dialogo.|  
  
 **Stili frame figlio**  
 Specifica l'aspetto e lo stato iniziale dei frame figlio nell'applicazione. Stili di frame figlio sono disponibili solo le applicazioni MDI.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Pulsante di riduzione casella**|Specifica se una finestra figlio ha un pulsante di riduzione a icona (abilitato per impostazione predefinita).|  
|**Ingrandimento**|Specifica se una finestra figlio contiene un pulsante di ingrandimento (abilitato per impostazione predefinita).|  
|**Ingrandita**|Specifica se una finestra figlio inizialmente ingrandita mediante l'impostazione del flag **WS_MAXIMIZE** nel [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow) funzione membro di `CChildFrame`.|  
  
 **Barre dei comandi (menu/barra degli strumenti/barra multifunzione)**  
 Indica se l'applicazione include menu, barre degli strumenti e/o una barra multifunzione. Non è disponibile per le applicazioni basate su finestra di dialogo.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Usare un menu classico**|Specifica che l'applicazione contiene un menu classico, non draggable.|  
|**Utilizzare una barra degli strumenti ancorabile classica**|Aggiunge una barra degli strumenti standard di Windows per l'applicazione. La barra degli strumenti contiene pulsanti per la creazione di un nuovo documento. aprire e salvare il file di documento; Taglia, copia o lo stampa di testo. e l'immissione di modalità della Guida. Se si abilita questa opzione aggiunge anche i comandi di menu per visualizzare o nascondere la barra degli strumenti.|  
|**Utilizzare una barra degli strumenti stile browser**|Aggiunge una barra degli strumenti stile di Internet Explorer per l'applicazione.|  
|**Utilizzare una barra dei menu e barra degli strumenti**|Indica che l'applicazione contiene una barra dei menu draggable e una barra degli strumenti.|  
|**Le immagini e definiti dall'utente barre degli strumenti**|Consente all'utente di personalizzare la barra degli strumenti e le immagini della barra degli strumenti in fase di esecuzione.|  
|**Comportamento menu personalizzati**|Specifica se il menu contiene l'elenco completo degli elementi di cui è aperto o se contiene solo i comandi che l'utente utilizza più di frequente.|  
|**Utilizzare una barra multifunzione**|Usa una barra multifunzione di Office 2007 nell'applicazione anziché una barra dei menu o una barra degli strumenti.|  
  
 **Titolo della finestra**  
 Per [CDialog (classe)](../../mfc/reference/cdialog-class.md)-solo applicazioni basate su questo titolo verrà visualizzato nella barra del titolo della finestra di dialogo. Per modificare questo campo, è necessario selezionare prima la **basato su finestra di dialogo** opzione **tipo di applicazione**. Per ulteriori informazioni, vedere [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

