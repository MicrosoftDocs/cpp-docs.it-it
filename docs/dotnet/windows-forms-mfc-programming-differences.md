---
title: Differenze tra la programmazione Windows Forms MFC | Microsoft Docs
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
ms.openlocfilehash: c7fe0665db01d1a2cd7a1da10b495ba86bc17469
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690862"
---
# <a name="windows-formsmfc-programming-differences"></a>Differenze tra la programmazione con Windows Form e quella con MFC
Negli argomenti [usando un controllo utente di Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md) viene descritto il supporto MFC per Windows Form. Se non si ha familiarità con .NET Framework o MFC di programmazione, in questo argomento vengono fornite informazioni sulle differenze tra i due oggetti di programmazione.  
  
 Windows Forms è per la creazione di applicazioni di Microsoft Windows su .NET Framework. Questo framework fornisce un set moderno, orientato, estensibile di classi che consentono di sviluppare applicazioni basate su Windows. Con Windows Forms, si è in grado di creare un'applicazione rich client che può accedere a un'ampia gamma di origini dati e fornire le funzionalità di modifica dei dati con controlli Windows Form e visualizzazione dei dati.  
  
 Tuttavia, se si è abituati a MFC, potrebbe essere usate per creare alcuni tipi di applicazioni non ancora supportate in modo esplicito in Windows Form. Le applicazioni Windows Forms sono equivalenti alle applicazioni di finestra di dialogo MFC. Tuttavia, non forniscono l'infrastruttura per il supporto diretto di altri tipi di applicazioni MFC, ad esempio server/contenitore di documenti OLE, i documenti di ActiveX, il supporto documento/visualizzazione di interfaccia a documento singolo (SDI), interfaccia a documenti multipli (MDI), e più di primo livello MTI (). È possibile scrivere una propria logica per creare queste applicazioni.  
  
 Per altre informazioni sulle applicazioni Windows Forms, vedere [Introduzione a Windows Forms](/dotnet/framework/winforms/windows-forms-overview).  
  
 Per un'applicazione di esempio che illustra Windows Form utilizzato con MFC, vedere [MFC e Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 La visualizzazione MFC o documento e le funzionalità di routing dei comandi seguenti non dispongono di equivalenti in Windows Form:  
  
-   Integrazione della shell  
  
     MFC gestisce i comandi dynamic data exchange (DDE) e gli argomenti della riga di comando utilizzati dalla shell quando fare doppio clic su un documento e selezionano questi verbi come aprire, modificare o di stampa. Windows Form non è prevista alcuna integrazione shell e non risponde ai verbi della shell.  
  
-   Modelli di documento  
  
     In MFC, modelli di documento associare una visualizzazione, che è contenuta in una finestra cornice (in modalità MTI, SDI o MDI), il documento che è stato aperto. Windows Form non ha equivalenti ai modelli di documento.  
  
-   Documenti  
  
     MFC registra i tipi di file di documento ed elabora il tipo di documento quando si apre un documento dalla shell. Windows Form non dispone di alcun supporto per i documenti.  
  
-   Stati del documento  
  
     MFC gestisce gli stati modificati per il documento. Pertanto, quando chiude l'applicazione, chiuderla l'ultima visualizzazione contenente l'applicazione o uscire da Windows, MFC viene richiesto di salvare il documento. Windows Form non dispone di alcun supporto equivalente.  
  
-   Comandi:  
  
     MFC è presente il concetto di comandi. La barra dei menu della barra degli strumenti e menu di scelta rapida può richiamare tutti lo stesso comando, ad esempio, le operazioni Taglia e copia. In Windows Form, i comandi sono strettamente associati eventi da un determinato elemento dell'interfaccia utente (ad esempio, una voce di menu); Pertanto, è necessario associare in modo esplicito tutti gli eventi di comando. È anche possibile gestire più eventi con un singolo gestore in Windows Form. Per altre informazioni, vedere [connessione di più eventi a un singolo gestore di eventi in Windows Form](/dotnet/framework/winforms/how-to-connect-multiple-events-to-a-single-event-handler-in-windows-forms).  
  
-   Routing dei comandi  
  
     Routing dei comandi MFC consente la visualizzazione attiva o il documento per elaborare i comandi. Poiché lo stesso comando spesso ha significati diversi per diverse visualizzazioni (ad esempio, copia si comporta in modo diverso nella visualizzazione di modifica testo rispetto a in un editor grafico), i comandi devono essere gestiti dalla visualizzazione attiva. Poiché Windows Forms menu e barre degli strumenti non dispone di alcuna conoscenza intrinseca della visualizzazione attiva, è possibile disporre di un gestore diverso per ogni tipo di visualizzazione per il **MenuItem** eventi senza scrivere codice aggiuntivo interno.  
  
-   Meccanismo di aggiornamento comandi  
  
     MFC dispone di un comando meccanismo di aggiornamento. Pertanto, la visualizzazione attiva o il documento è responsabile per lo stato degli elementi dell'interfaccia utente (ad esempio, l'abilitazione o disabilitazione di un pulsante di menu elemento o degli strumenti e degli stati di selezione). Windows Form non ha un equivalente di un meccanismo di aggiornamento di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
