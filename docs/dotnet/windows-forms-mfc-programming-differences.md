---
title: Differenze tra la programmazione di Windows Form MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms [C++], compared to MFC
ms.assetid: f3bfcf45-cfd4-45a4-8cde-5f4dbb18ee51
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9ad9e47ba2bb3d9a5e5b21620a4bf4b50177d63b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33172671"
---
# <a name="windows-formsmfc-programming-differences"></a>Differenze tra la programmazione con Windows Form e quella con MFC
Negli argomenti di [utilizzando un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md) viene descritto il supporto MFC per Windows Form. Se non si ha familiarità con .NET Framework o MFC di programmazione, in questo argomento vengono fornite informazioni sulle differenze tra i due oggetti di programmazione.  
  
 Windows Form è per la creazione di applicazioni di Microsoft Windows su .NET Framework. Questo framework fornisce un set di moderno ed estendibile orientata agli oggetti di classi che consentono di sviluppare applicazioni basate su Windows. Con Windows Form, si è in grado di creare un'applicazione rich client che può accedere a un'ampia gamma di origini dati e fornire la visualizzazione dei dati e modifica dei dati utilizzando i controlli Windows Form.  
  
 Tuttavia, se si è abituati a MFC, potrebbe essere utilizzata per la creazione di determinati tipi di applicazioni non ancora supportato in modo esplicito in Windows Form. Applicazioni Windows Forms sono equivalenti alle applicazioni di finestra di dialogo MFC. Tuttavia, non forniscono l'infrastruttura per il supporto diretto di altri tipi di applicazione contenitore/server di documenti OLE, i documenti ActiveX, il supporto documento/visualizzazione MFC per interfaccia a documento singolo (SDI), interfaccia a documenti multipli (MDI), e più di primo livello MTI (). È possibile scrivere la logica per creare queste applicazioni.  
  
 Per ulteriori informazioni sulle applicazioni Windows Forms, vedere [Introduzione a Windows Form](/dotnet/framework/winforms/windows-forms-overview).  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e integrazione con Windows Form](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 Visualizzazione MFC o documento le seguenti funzionalità di routing dei comandi non dispongono di equivalenti in Windows Form:  
  
-   Integrazione della shell  
  
     MFC gestisce i comandi dynamic data exchange (DDE) e gli argomenti della riga di comando che viene utilizzata la shell quando fare doppio clic su un documento e selezionare tali verbi come aprire, modificare o stampare. Windows Form non dispone di alcuna integrazione della shell e non risponde ai verbi della shell.  
  
-   Modelli di documento  
  
     In MFC, modelli di documento associare una visualizzazione, che è contenuta in una finestra cornice (in modalità MDI, SDI o MTI), il documento che è aperto. Windows Form non dispone di alcun equivalente di modelli di documento.  
  
-   Documenti  
  
     Registrare i tipi di file di documento ed elabora il tipo di documento quando si apre un documento dalla shell di MFC. Windows Form non dispone di alcun supporto per i documenti.  
  
-   Stati del documento  
  
     MFC conserva gli stati modificati per il documento. Pertanto, quando si chiude l'applicazione, chiuderla l'ultima visualizzazione che contiene l'applicazione o si esce da Windows, MFC viene richiesto di salvare il documento. Windows Form dispone di un supporto equivalente.  
  
-   Comandi:  
  
     MFC è presente il concetto di comandi. La barra dei menu della barra degli strumenti e menu di scelta rapida può richiamare tutti lo stesso comando, ad esempio Taglia e copia. In Windows Form, i comandi sono strettamente associati eventi da un determinato elemento dell'interfaccia utente (ad esempio una voce di menu); Pertanto, è necessario associare tutti gli eventi di comando in modo esplicito. È anche possibile gestire più eventi con un singolo gestore in Windows Form. Per ulteriori informazioni, vedere [connessione di più eventi a un singolo gestore eventi in Windows Form](/dotnet/framework/winforms/how-to-connect-multiple-events-to-a-single-event-handler-in-windows-forms).  
  
-   Comandi (routing)  
  
     Routing di comandi MFC consente la visualizzazione attiva o il documento, l'elaborazione dei comandi. Poiché lo stesso comando spesso ha significati diversi per le viste diverse (ad esempio copia si comporta in modo diverso nella visualizzazione di modifica testo di in un editor grafico), i comandi devono essere gestiti dalla visualizzazione attiva. Poiché il menu di Windows Form e le barre degli strumenti non sono della visualizzazione attiva, è possibile avere un gestore diverso per ogni tipo di visualizzazione per il **MenuItem** eventi senza scrivere codice interno aggiuntivo.  
  
-   Meccanismo di aggiornamento di comando  
  
     MFC dispone di un comando meccanismo di aggiornamento. Pertanto, la visualizzazione attiva o il documento è responsabile dello stato degli elementi dell'interfaccia utente (ad esempio, l'abilitazione o disabilitazione di un pulsante di menu elemento o lo strumento e degli stati di selezione). Windows Form non dispone di alcun equivalente di un comando del meccanismo di aggiornamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Procedure dettagliate su Windows Form](http://msdn.microsoft.com/en-us/fd44d13d-4733-416f-aefc-32592e59e5d9)