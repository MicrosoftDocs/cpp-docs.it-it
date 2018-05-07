---
title: Utilizzo dei campi Callback in una selezione data e ora controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- DTN_FORMATQUERY
- DTN_FORMAT
dev_langs:
- C++
helpviewer_keywords:
- DateTimePicker control [MFC], callback fields
- callback fields in CDateTimeCtrl class [MFC]
- CDateTimeCtrl class [MFC], callback fields
- CDateTimeCtrl class [MFC], handling DTN_FORMAT and DTN_FORMATQ
- DTN_FORMATQUERY notification [MFC]
- DTN_FORMAT notification [MFC]
- DateTimePicker control [MFC]
ms.assetid: 404f4ba9-cba7-4718-9faa-bc6b274a723f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b0d59aa8c30e9308448467bb198e898106e61f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-callback-fields-in-a-date-and-time-picker-control"></a>Utilizzo dei campi callback in un controllo selezione data e ora
Oltre ai caratteri di formato standard che definiscono i campi di selezione data e ora, è possibile personalizzare l'output specificando determinate parti di una stringa di formato personalizzata come campi callback. Per dichiarare un campo callback, includere uno o più caratteri "X" (codice ASCII 88) in un punto qualsiasi nel corpo della stringa di formato. Ad esempio, la stringa seguente "' oggi è: 'yy' / 'MM' / 'dd' (Day 'X')'", il punto di controllo di selezione data e ora visualizzare il valore corrente dell'anno seguita da mese, data e il giorno dell'anno.  
  
> [!NOTE]
>  Il numero di x in un callback di campo non corrisponde al numero di caratteri che verrà visualizzato.  
  
 È possibile distinguere tra più campi callback in una stringa personalizzata ripetendo il carattere "X". Di conseguenza, la stringa di formato "XXddddMMMdd', ' yyyXXX" contiene due campi callback univoci, "XX" e "XXX".  
  
> [!NOTE]
>  Campi callback vengono considerati come campi validi, pertanto l'applicazione deve essere preparata a gestire **DTN_WMKEYDOWN** messaggi di notifica.  
  
 Implementazione di campi callback nel controllo selezione data e ora è costituita da tre parti:  
  
-   Inizializzando la stringa di formato personalizzato  
  
-   La gestione di **DTN_FORMATQUERY** notifica  
  
-   La gestione di **DTN_FORMAT** notifica  
  
## <a name="initializing-the-custom-format-string"></a>Inizializzando la stringa di formato personalizzato  
 Inizializza la stringa personalizzata con una chiamata a `CDateTimeCtrl::SetFormat`. Per ulteriori informazioni, vedere [tramite stringhe di formato personalizzate in una data e un controllo selezione ora](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md). Per impostare la stringa di formato personalizzato viene nel `OnInitDialog` funzione della classe di finestra di dialogo contenente o `OnInitialUpdate` funzione della classe di visualizzazione.  
  
## <a name="handling-the-dtnformatquery-notification"></a>Gestione della notifica DTN_FORMATQUERY  
 Quando il controllo consente di analizzare la stringa di formato e rileva un campo callback, l'applicazione invia **DTN_FORMAT** e **DTN_FORMATQUERY** messaggi di notifica. Stringa del campo callback è inclusa con le notifiche, pertanto è possibile determinare quale campo callback viene eseguita la query.  
  
 Il **DTN_FORMATQUERY** notifica viene inviata per recuperare la dimensione massima consentita, in pixel della stringa che verrà visualizzato nel campo callback corrente.  
  
 Per calcolare correttamente questo valore, è necessario calcolare l'altezza e la larghezza della stringa, deve essere sostituito per il campo con tipo di carattere del controllo. Il calcolo effettivo della stringa viene ottenuto facilmente con una chiamata al [GetTextExtentPoint32](http://msdn.microsoft.com/library/windows/desktop/dd144938) funzione Win32. Dopo aver determinata la dimensione, passare il valore restituito all'applicazione e uscire dalla funzione del gestore.  
  
 L'esempio seguente è un metodo per fornire le dimensioni della stringa di callback:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]  
  
 Dopo aver calcolata la dimensione del campo callback corrente, è necessario fornire un valore per il campo. Questa operazione viene eseguita nel gestore per il **DTN_FORMAT** notifica.  
  
## <a name="handling-the-dtnformat-notification"></a>La gestione di DTN_FORMAT (notifica)  
 Il **DTN_FORMAT** notifica viene usata dall'applicazione per richiedere la stringa di caratteri che sarà sostituita. Nell'esempio seguente viene illustrato un possibile metodo:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]  
  
> [!NOTE]
>  Il puntatore di **NMDATETIMEFORMAT** struttura viene rilevata il primo parametro del gestore di notifica nel tipo appropriato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

