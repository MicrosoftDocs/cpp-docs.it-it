---
title: 'Procedura: creare una mappa messaggi per una classe modello'
ms.date: 11/04/2016
helpviewer_keywords:
- template classes [MFC], creating message maps
- message maps [MFC], template classes
ms.assetid: 4e7e24f8-06df-4b46-82aa-7435c8650de3
ms.openlocfilehash: 437fdf59ae9c9d3428654fc412fd78bf1348a701
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50586238"
---
# <a name="how-to-create-a-message-map-for-a-template-class"></a>Procedura: creare una mappa messaggi per una classe modello

Mapping di messaggi in MFC offre un modo efficiente per indirizzare i messaggi di Windows per un'istanza di oggetto C++ appropriata. Le classi dell'applicazione, documento e visualizzazione di classi, classi di controlli e così via sono esempi di destinazioni di mappe messaggi MFC.

Tradizionale le mappe messaggi MFC vengono dichiarate usando la [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) macro per dichiarare l'inizio della mappa del messaggio, una voce della macro per ogni metodo di classe di gestore di messaggi e infine il [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map)macro per dichiarare la fine della mappa messaggi.

Una limitazione con la [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) (macro) si verifica quando viene usata in combinazione con una classe che contiene gli argomenti di modello. Se usato con una classe di modello, questa macro causerà un errore in fase di compilazione a causa di parametri del modello mancanti durante l'espansione della macro. Il [BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map) macro è stata progettata per consentire le classi che contengono un argomento di modello solo per dichiarare i propri messaggi esegue il mapping.

## <a name="example"></a>Esempio

Si consideri un esempio in cui il MFC [CListBox](../mfc/reference/clistbox-class.md) classe viene estesa per consentire la sincronizzazione con un'origine dati esterna. Fittizia `CSyncListBox` classe viene dichiarata come segue:

[!code-cpp[NVC_MFC_CListBox#42](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_1.h)]

Il `CSyncListBox` classe è basati su modelli in un singolo tipo che descrive l'origine dati verranno sincronizzati con. Dichiara inoltre tre metodi che partecipano alla mappa messaggi della classe: `OnPaint`, `OnDestroy`, e `OnSynchronize`. Il `OnSynchronize` metodo viene implementato come segue:

[!code-cpp[NVC_MFC_CListBox#43](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_2.cpp)]

Consente l'implementazione precedente il `CSyncListBox` classe essere specializzati in qualsiasi tipo di classe che implementa il `GetCount` metodo, ad esempio `CArray`, `CList`, e `CMap`. Il `StringizeElement` è una funzione di modello prototipo dalle condizioni seguenti:

[!code-cpp[NVC_MFC_CListBox#44](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_3.cpp)]

In genere, la mappa dei messaggi per questa classe verrà definita come:

```cpp
BEGIN_MESSAGE_MAP(CSyncListBox, CListBox)
  ON_WM_PAINT()
  ON_WM_DESTROY()
  ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)
END_MESSAGE_MAP()
```

in cui **LBN_SYNCHRONIZE** è un messaggio utente personalizzati definito dall'applicazione, ad esempio:

[!code-cpp[NVC_MFC_CListBox#45](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_4.cpp)]

La mappa di macro precedente non verrà compilato, dovuto al fatto che la specifica del modello per il `CSyncListBox` classe risulteranno mancante durante l'espansione della macro. Il **BEGIN_TEMPLATE_MESSAGE_MAP** macro risolvere il problema è da che incorpora il parametro di modello specificato nell'oggetto map macro espansa. La mappa dei messaggi per questa classe diventa:

[!code-cpp[NVC_MFC_CListBox#46](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_5.cpp)]

Seguente illustra l'uso di esempio del `CSyncListBox` classe utilizzando un `CStringList` oggetto:

[!code-cpp[NVC_MFC_CListBox#47](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_6.cpp)]

Per completare il test, il `StringizeElement` funzione debba essere specializzata per lavorare con i `CStringList` classe:

[!code-cpp[NVC_MFC_CListBox#48](../mfc/codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map)<br/>
[Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

