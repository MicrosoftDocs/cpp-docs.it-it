---
title: "Utilizzo dei campi callback in un controllo selezione data e ora | Microsoft Docs"
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
  - "DTN_FORMATQUERY"
  - "DTN_FORMAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "campi callback nella classe CDateTimeCtrl"
  - "CDateTimeCtrl (classe), campi callback"
  - "CDateTimeCtrl (classe), gestione di DTN_FORMAT e DTN_FORMATQ"
  - "DateTimePicker (controllo) [MFC]"
  - "DateTimePicker (controllo) [MFC], campi callback"
  - "DTN_FORMAT (notifica)"
  - "DTN_FORMATQUERY (notifica)"
ms.assetid: 404f4ba9-cba7-4718-9faa-bc6b274a723f
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dei campi callback in un controllo selezione data e ora
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre ai caratteri di formato standard che definiscono i campi di selezione data e ora, è possibile personalizzare il proprio output specificando determinate parti di una stringa di formato personalizzata come campi callback.  Per dichiarare un campo callback, includere uno o più caratteri "X" codice ASCII \(88\) in un punto qualsiasi del corpo della stringa di formato.  Ad esempio, la stringa "today is: "\/"\/"yy mm" dd \(giorno "X "\)" "determina il controllo di selezione data e ora da visualizzare il valore corrente dell'anno seguito dal mese, dalla data e infine dal giorno dell'anno.  
  
> [!NOTE]
>  Il numero di x in un campo callback non corrisponde al numero di caratteri da visualizzare.  
  
 È possibile distinguere tra i campi callback in una stringa personalizzata ripetendo il carattere "X".  Pertanto, la stringa di formato "XXddddMMMdd, 'yyyXXX" contiene due campi callback univoci, "XX" e "SE NO".  
  
> [!NOTE]
>  I campi callback vengono considerati come campi validi, pertanto l'applicazione deve essere preparata gestire i messaggi di notifica di **DTN\_WMKEYDOWN** .  
  
 Implementare i campi callback nel controllo di selezione data e ora è costituito da tre parti:  
  
-   Inizializzare la stringa di formato personalizzata  
  
-   Gestire la notifica di **DTN\_FORMATQUERY**  
  
-   Gestire la notifica di **DTN\_FORMAT**  
  
## Inizializzare la stringa di formato personalizzata  
 Inizializzare la stringa personalizzata con una chiamata a `CDateTimeCtrl::SetFormat`.  Per ulteriori informazioni, vedere [Utilizzo di stringhe di formato personalizzate in un controllo di selezione data e ora](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md).  Una posizione comune per impostare la stringa di formato personalizzata è la funzione di `OnInitDialog` della classe della finestra di dialogo o funzione contenitore di `OnInitialUpdate` della classe di visualizzazione contenitore.  
  
## Gestire la notifica di DTN\_FORMATQUERY  
 Quando il controllo analizza la stringa di formato e rileva un campo callback, l'applicazione invia i messaggi di notifica di **DTN\_FORMATQUERY** e di **DTN\_FORMAT**.  La stringa del campo callback è inclusa con le notifiche è pertanto possibile determinare il campo callback viene eseguita la query.  
  
 La notifica di **DTN\_FORMATQUERY** viene inviata per recuperare la dimensione massima consentita in pixel della stringa che verrà visualizzata nel campo callback corrente.  
  
 Per poter calcolare il valore, è necessario calcolare l'altezza e la larghezza della stringa, ad essere sostituito per il campo, tramite il tipo del controllo.  Che il calcolo della stringa facilmente viene raggiunto tramite una chiamata alla funzione Win32 di [GetTextExtentPoint32](http://msdn.microsoft.com/library/windows/desktop/dd144938).  Quando la dimensione viene determinata, passa il valore dell'applicazione e chiude la funzione di gestione.  
  
 L'esempio seguente è un metodo di fornire la dimensione della stringa di callback:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/CPP/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]  
  
 La dimensione del campo callback corrente è stata calcolata una volta, è necessario fornire un valore per il campo.  Questa operazione viene eseguita nel gestore per la notifica di **DTN\_FORMAT** .  
  
## Gestire la notifica di DTN\_FORMAT  
 La notifica di **DTN\_FORMAT** venga utilizzata dall'applicazione necessaria una stringa di caratteri che verrà sostituito.  Nell'esempio seguente viene illustrato un metodo possibile:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/CPP/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]  
  
> [!NOTE]
>  Il puntatore alla struttura di **NMDATETIMEFORMAT** viene trovato eseguendo il cast del primo parametro del gestore della notifica al tipo appropriato.  
  
## Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)