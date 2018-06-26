---
title: 'Procedura: creare una mappa messaggi per una classe modello | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- template classes [MFC], creating message maps
- message maps [MFC], template classes
ms.assetid: 4e7e24f8-06df-4b46-82aa-7435c8650de3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f7867cc40ae837da5fad957b6a1d584fb7c2c4ce
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929900"
---
# <a name="how-to-create-a-message-map-for-a-template-class"></a>Procedura: creare una mappa messaggi per una classe modello
Mapping di messaggi in MFC fornisce un modo efficiente per indirizzare i messaggi di Windows per un'istanza dell'oggetto C++ appropriato. Le classi dell'applicazione, il documento e visualizzazione classi, classi di controlli e così via sono esempi di destinazioni di mappa messaggi MFC.  
  
 Le mappe messaggi MFC tradizionale vengono dichiarate usando il [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) macro per dichiarare l'inizio della mappa del messaggio, una voce della macro per ogni metodo di classe del gestore di messaggi e infine il [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map)macro per dichiarare la fine della mappa messaggi.  
  
 Una limitazione con il [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) (macro) si verifica quando viene utilizzata in combinazione con una classe che contiene gli argomenti di modello. Se utilizzato con una classe modello, questa macro si verificherà un errore in fase di compilazione a causa di parametri di modello mancante durante l'espansione della macro. Il [BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map) macro è stata progettata per consentire le classi che contengono un argomento di modello solo per dichiarare i propri messaggi viene eseguito il mapping.  
  
## <a name="example"></a>Esempio  
 Si consideri un esempio in cui l'operazione MFC [CListBox](../mfc/reference/clistbox-class.md) classe viene estesa per consentire la sincronizzazione con un'origine dati esterna. Il fittizia `CSyncListBox` classe viene dichiarata come segue:  
  
 [!code-cpp[NVC_MFC_CListBox#42](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_1.h)]  
  
 Il `CSyncListBox` classe è basata su modelli in un unico tipo che descrive l'origine dati verrà sincronizzato con. Dichiara anche tre metodi che farà parte della mappa messaggi della classe: `OnPaint`, `OnDestroy`, e `OnSynchronize`. Il `OnSynchronize` metodo viene implementato come indicato di seguito:  
  
 [!code-cpp[NVC_MFC_CListBox#43](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_2.cpp)]  
  
 Consente l'implementazione precedente la `CSyncListBox` classe specializzati in qualsiasi tipo di classe che implementa le `GetCount` metodo, ad esempio `CArray`, `CList`, e `CMap`. Il `StringizeElement` è una funzione di modello un prototipo dai seguenti elementi:  
  
 [!code-cpp[NVC_MFC_CListBox#44](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_3.cpp)]  
  
 In genere, la mappa messaggi per questa classe verrà definita come:  
  
 `BEGIN_MESSAGE_MAP(CSyncListBox, CListBox)`  
  
 `ON_WM_PAINT()`  
  
 `ON_WM_DESTROY()`  
  
 `ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)`  
  
 `END_MESSAGE_MAP()`  
  
 in cui **LBN_SYNCHRONIZE** è un messaggio utente personalizzate definito dall'applicazione, ad esempio:  
  
 [!code-cpp[NVC_MFC_CListBox#45](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_4.cpp)]  
  
 La mappa di macro precedente non verrà compilato, dovuto al fatto che la specifica del modello per il `CSyncListBox` classe risulta manca durante l'espansione della macro. Il **BEGIN_TEMPLATE_MESSAGE_MAP** (macro) risolvere il problema incorporando parametro del modello specificato nella mappa macro espansa. La mappa messaggi per questa classe diventa:  
  
 [!code-cpp[NVC_MFC_CListBox#46](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_5.cpp)]  
  
 Nell'esempio viene illustrato l'utilizzo di esempio del `CSyncListBox` classe utilizzando un `CStringList` oggetto:  
  
 [!code-cpp[NVC_MFC_CListBox#47](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_6.cpp)]  
  
 Per completare il test, il `StringizeElement` funzione deve essere specializzata per lavorare con i `CStringList` classe:  
  
 [!code-cpp[NVC_MFC_CListBox#48](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map)   
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

