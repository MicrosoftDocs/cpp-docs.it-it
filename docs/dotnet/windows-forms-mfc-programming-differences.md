---
title: Differenze di programmazione Windows Forms-MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms [C++], compared to MFC
ms.assetid: f3bfcf45-cfd4-45a4-8cde-5f4dbb18ee51
ms.openlocfilehash: 52de36217a5ab47eddcbe1abd6617860dcb910b8
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73704182"
---
# <a name="windows-formsmfc-programming-differences"></a>Differenze tra la programmazione con Windows Form e quella con MFC

Negli argomenti relativi all' [utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md) viene descritto il supporto mfc per Windows Forms. Se non si ha familiarità con .NET Framework o la programmazione MFC, in questo argomento vengono fornite informazioni complementari sulle differenze di programmazione tra i due.

Windows Forms per la creazione di applicazioni Microsoft Windows nel .NET Framework. Questo Framework fornisce un set di classi moderno, orientato a oggetti e estendibile che consente di sviluppare applicazioni complete basate su Windows. Con Windows Forms, è possibile creare un'applicazione rich client in grado di accedere a un'ampia gamma di origini dati e fornire funzionalità di visualizzazione dei dati e di modifica dei dati tramite Windows Forms controlli.

Tuttavia, se si è abituati a MFC, è possibile usare la creazione di determinati tipi di applicazioni che non sono ancora supportate in modo esplicito in Windows Forms. Windows Forms le applicazioni sono equivalenti alle applicazioni della finestra di dialogo MFC. Tuttavia, non offrono l'infrastruttura necessaria per supportare direttamente altri tipi di applicazioni MFC, ad esempio il server/contenitore del documento OLE, i documenti ActiveX, il supporto per documenti/visualizzazioni per l'interfaccia a documento singolo (SDI), l'interfaccia a documenti multipli (MDI) e interfaccia più di primo livello (MTI). È possibile scrivere la propria logica per creare queste applicazioni.

Per ulteriori informazioni sulle applicazioni Windows Forms, vedere [Introduzione a Windows Forms](/dotnet/framework/winforms/windows-forms-overview).

Per un'applicazione di esempio che Mostra Windows Forms utilizzata con MFC, vedere [MFC and Windows Forms Integration](https://www.microsoft.com/en-us/download/details.aspx?id=2113).

Le funzionalità seguenti per la visualizzazione MFC o il routing di documenti e comandi non hanno equivalenti in Windows Forms:

- Integrazione della shell

   MFC gestisce i comandi DDE (Dynamic Data Exchange) e gli argomenti della riga di comando utilizzati dalla shell quando si fa clic con il pulsante destro del mouse su un documento e si selezionano tali verbi come Apri, modifica o stampa. Windows Forms non dispone di alcuna integrazione della shell e non risponde ai verbi della shell.

- Modelli di documento

   In MFC, i modelli di documento associano una vista, che è contenuta in una finestra cornice (in modalità MDI, SDI o MTI), con il documento aperto. Windows Forms non è equivalente ai modelli di documento.

- Documenti

   MFC registra i tipi di file di documento ed elabora il tipo di documento quando si apre un documento dalla Shell. Windows Forms non dispone del supporto per i documenti.

- Stati del documento

   MFC gestisce gli Stati Dirty per il documento. Pertanto, quando si chiude l'applicazione, si chiude l'ultima visualizzazione che contiene l'applicazione o si esce da Windows, MFC richiede di salvare il documento. Windows Forms non dispone di supporto equivalente.

- Comandi

   MFC è il concetto di comandi. La barra dei menu, la barra degli strumenti e il menu di scelta rapida possono richiamare lo stesso comando, ad esempio taglia e copia. In Windows Forms, i comandi sono eventi strettamente associati da un particolare elemento dell'interfaccia utente, ad esempio una voce di menu. Pertanto, è necessario associare tutti gli eventi del comando in modo esplicito. È anche possibile gestire più eventi con un singolo gestore in Windows Forms. Per ulteriori informazioni, vedere [connessione di più eventi a un singolo gestore eventi in Windows Forms](/dotnet/framework/winforms/how-to-connect-multiple-events-to-a-single-event-handler-in-windows-forms).

- Routing dei comandi

   Il routing dei comandi MFC consente alla visualizzazione attiva o al documento di elaborare i comandi. Poiché lo stesso comando ha spesso significati diversi per visualizzazioni diverse (ad esempio, la copia si comporta in modo diverso nella visualizzazione di modifica del testo rispetto a un editor di grafica), i comandi devono essere gestiti dalla visualizzazione attiva. Poiché i menu e le barre degli strumenti Windows Forms non hanno una conoscenza approfondita della visualizzazione attiva, non è possibile avere un gestore diverso per ogni tipo di visualizzazione per **MenuItem. fare clic su** eventi senza scrivere codice interno aggiuntivo.

- Meccanismo di aggiornamento del comando

   MFC dispone di un meccanismo di aggiornamento del comando. Pertanto, la visualizzazione o il documento attivo è responsabile dello stato degli elementi dell'interfaccia utente (ad esempio, abilitazione o disabilitazione di una voce di menu o di un pulsante dello strumento e degli stati selezionati). Windows Forms non è equivalente a un meccanismo di aggiornamento dei comandi.

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)
