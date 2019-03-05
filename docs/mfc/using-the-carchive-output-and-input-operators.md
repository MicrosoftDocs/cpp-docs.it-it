---
title: Usando l'oggetto CArchive &lt; &lt; e &gt; &gt; operatori
ms.date: 11/04/2016
f1_keywords:
- CArchive
helpviewer_keywords:
- objects [MFC], loading from previously stored values
- CArchive class [MFC], storing and loading objects
- CArchive class [MFC], operators
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
ms.openlocfilehash: 9b4192e79b68388e45eb9837e056bbd881de2933
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57259672"
---
# <a name="using-the-carchive-ltlt-and-gtgt-operators"></a>Usando l'oggetto CArchive &lt; &lt; e &gt; &gt; operatori

`CArchive` fornisce <\< e >> operatori per la scrittura e lettura di tipi di dati semplici nonché `CObject`s da e verso un file.

#### <a name="to-store-an-object-in-a-file-via-an-archive"></a>Per archiviare un oggetto in un file tramite un archivio

1. Nell'esempio seguente viene illustrato come archiviare un oggetto in un file tramite un archivio:

   [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_1.cpp)]

#### <a name="to-load-an-object-from-a-value-previously-stored-in-a-file"></a>Per caricare un oggetto da un valore archiviato in precedenza in un file

1. Nell'esempio seguente viene illustrato come caricare un oggetto da un valore archiviato in precedenza in un file:

   [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_2.cpp)]

In genere, archiviare e caricare dati da e verso un file tramite un archivio nel `Serialize` funzioni di `CObject`-classi derivate, che deve aver dichiarato con la macro DECLARE_SERIAL. Un riferimento a un `CArchive` oggetto viene passato per il `Serialize` (funzione). Si chiama il `IsLoading` funzione del `CArchive` oggetto per determinare se il `Serialize` funzione è stata chiamata per caricare i dati dal file o archiviare dati nel file.

Il `Serialize` funzione di un tipo serializzabile `CObject`-classe derivata ha in genere il formato seguente:

[!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_3.cpp)]

Il modello di codice precedente è esattamente lo stesso di quello che crea la creazione guidata applicazione per il `Serialize` funzione del documento (una classe derivata da `CDocument`). Questo modello di codice consente di scrivere codice che è più facile rivedere, perché il codice di archiviazione e il codice di caricamento deve essere sempre paralleli, come nell'esempio seguente:

[!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_4.cpp)]

La libreria definisce **< \<** e **>>** operatori per `CArchive` come il primo operando e i seguenti tipi di dati e i tipi di classe come il secondo operando :

||||
|-|-|-|
|`CObject*`|**DIMENSIONI** e `CSize`|**float**|
|**WORD**|`CString`|**PUNTO** e `CPoint`|
|`DWORD`|**BYTE**|`RECT` e `CRect`|
|**Double**|**LONG**|`CTime` e `CTimeSpan`|
|`Int`|**COleCurrency**|`COleVariant`|
|`COleDateTime`|`COleDateTimeSpan`||

> [!NOTE]
>  Memorizzazione e caricamento `CObject`s tramite un archivio richiede considerazioni aggiuntive. Per altre informazioni, vedere [memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

Il **CArchive <\<**  e **>>** operatori restituiscono sempre un riferimento al `CArchive` oggetto, ovvero il primo operando. In questo modo è possibile concatenare gli operatori, come illustrato di seguito:

[!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: Serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
