---
description: 'Altre informazioni su: procedura: creare una mappa messaggi per una classe modello'
title: 'Procedura: creare una mappa messaggi per una classe modello'
ms.date: 11/04/2016
helpviewer_keywords:
- template classes [MFC], creating message maps
- message maps [MFC], template classes
ms.assetid: 4e7e24f8-06df-4b46-82aa-7435c8650de3
ms.openlocfilehash: 16d1d486bae77d0e580521ba71d29216701c4481
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253429"
---
# <a name="how-to-create-a-message-map-for-a-template-class"></a>Procedura: creare una mappa messaggi per una classe modello

Il mapping dei messaggi in MFC fornisce un modo efficiente per indirizzare i messaggi di Windows a un'istanza dell'oggetto C++ appropriata. Esempi di destinazioni della mappa messaggi MFC includono classi di applicazioni, classi di documenti e visualizzazioni, classi di controlli e così via.

Le mappe dei messaggi MFC tradizionali vengono dichiarate utilizzando la macro [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) per dichiarare l'inizio della mappa messaggi, una voce di macro per ogni metodo della classe del gestore di messaggi e infine la macro [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map) per dichiarare la fine della mappa messaggi.

Una limitazione della [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) macro si verifica quando viene utilizzata insieme a una classe che contiene gli argomenti di modello. Se utilizzata con una classe modello, questa macro provocherà un errore in fase di compilazione a causa dei parametri di modello mancanti durante l'espansione della macro. La macro [BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map) è stata progettata per consentire alle classi contenenti un solo argomento di modello di dichiarare le proprie mappe messaggi.

## <a name="example"></a>Esempio

Si consideri un esempio in cui la classe [CLISTBOX](reference/clistbox-class.md) MFC viene estesa per fornire la sincronizzazione con un'origine dati esterna. La classe fittizia `CSyncListBox` è dichiarata come segue:

[!code-cpp[NVC_MFC_CListBox#42](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_1.h)]

La `CSyncListBox` classe è basata su modelli in un singolo tipo che descrive l'origine dati con cui verrà eseguita la sincronizzazione. Dichiara anche tre metodi che parteciperanno alla mappa messaggi della classe: `OnPaint` , `OnDestroy` e `OnSynchronize` . Il `OnSynchronize` metodo viene implementato come segue:

[!code-cpp[NVC_MFC_CListBox#43](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_2.cpp)]

L'implementazione precedente consente `CSyncListBox` di specializzare la classe in qualsiasi tipo di classe che implementa il `GetCount` metodo, ad esempio `CArray` , `CList` e `CMap` . La `StringizeElement` funzione è una funzione modello con prototipo di quanto segue:

[!code-cpp[NVC_MFC_CListBox#44](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_3.cpp)]

In genere, la mappa messaggi per questa classe verrebbe definita come segue:

```cpp
BEGIN_MESSAGE_MAP(CSyncListBox, CListBox)
  ON_WM_PAINT()
  ON_WM_DESTROY()
  ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)
END_MESSAGE_MAP()
```

dove **LBN_SYNCHRONIZE** è un messaggio utente personalizzato definito dall'applicazione, ad esempio:

[!code-cpp[NVC_MFC_CListBox#45](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_4.cpp)]

La mappa macro precedente non verrà compilata, a causa del fatto che la specifica del modello per la classe non sarà presente `CSyncListBox` durante l'espansione della macro. La macro **BEGIN_TEMPLATE_MESSAGE_MAP** risolve questo problema incorporando il parametro di modello specificato nella mappa macro espansa. La mappa messaggi per questa classe diventa:

[!code-cpp[NVC_MFC_CListBox#46](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_5.cpp)]

Nell'esempio riportato di seguito viene illustrato l'utilizzo della `CSyncListBox` classe utilizzando un `CStringList` oggetto:

[!code-cpp[NVC_MFC_CListBox#47](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_6.cpp)]

Per completare il test, la `StringizeElement` funzione deve essere specializzata per lavorare con la `CStringList` classe:

[!code-cpp[NVC_MFC_CListBox#48](codesnippet/cpp/how-to-create-a-message-map-for-a-template-class_7.cpp)]

## <a name="see-also"></a>Vedi anche

[BEGIN_TEMPLATE_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_template_message_map)<br/>
[Gestione e mapping dei messaggi](message-handling-and-mapping.md)
