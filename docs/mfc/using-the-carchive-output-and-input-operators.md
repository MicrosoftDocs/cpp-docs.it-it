---
title: Uso di CArchive &lt; &lt; e &gt; &gt; Operators
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], loading from previously stored values
- CArchive class [MFC], storing and loading objects
- CArchive class [MFC], operators
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
ms.openlocfilehash: 0351cd0fad1d0fc838c75d3cdbd809a04b0fb393
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832295"
---
# <a name="using-the-carchive-ltlt-and-gtgt-operators"></a>Uso di CArchive &lt; &lt; e &gt; &gt; Operators

`CArchive` fornisce <\< and > operatori> per la scrittura e la lettura di tipi di dati semplici, nonché `CObject` di da e verso un file.

#### <a name="to-store-an-object-in-a-file-via-an-archive"></a>Per archiviare un oggetto in un file tramite un archivio

1. Nell'esempio seguente viene illustrato come archiviare un oggetto in un file tramite un archivio:

   [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_1.cpp)]

#### <a name="to-load-an-object-from-a-value-previously-stored-in-a-file"></a>Per caricare un oggetto da un valore archiviato in precedenza in un file

1. Nell'esempio seguente viene illustrato come caricare un oggetto da un valore archiviato in precedenza in un file:

   [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_2.cpp)]

In genere, è possibile archiviare e caricare i dati da e verso un file tramite un archivio nelle `Serialize` funzioni delle `CObject` classi derivate da, che è necessario dichiarare con la macro DECLARE_SERIALIZE. Un riferimento a un `CArchive` oggetto viene passato alla `Serialize` funzione. Chiamare la `IsLoading` funzione dell' `CArchive` oggetto per determinare se la `Serialize` funzione è stata chiamata per caricare i dati dal file o archiviare i dati nel file.

La `Serialize` funzione di una classe derivata da serializzabile `CObject` ha in genere il formato seguente:

[!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_3.cpp)]

Il modello di codice precedente è esattamente uguale a quello creato da Creazione guidata applicazioni per la `Serialize` funzione del documento (una classe derivata da `CDocument` ). Questo modello di codice consente di scrivere codice più semplice da rivedere, perché il codice di archiviazione e il codice di caricamento devono essere sempre paralleli, come nell'esempio seguente:

[!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_4.cpp)]

La libreria definisce **`<<`** gli **`>>`** operatori e per `CArchive` come primo operando e i tipi di dati e i tipi di classe seguenti come secondo operando:

:::row:::
   :::column span="":::
      `BYTE`\
      `CObject*`\
      `COleCurrency`\
      `COleDateTime`\
      `COleDateTimeSpan`
   :::column-end:::
   :::column span="":::
      `COleVariant`\
      `CString`\
      `CTime` e `CTimeSpan`\
      `Double`
   :::column-end:::
   :::column span="":::
      `DWORD`\
      `Float`\
      `Int`\
      `LONG`
   :::column-end:::
   :::column span="":::
      `POINT` e `CPoint`\
      `RECT` e `CRect`\
      `SIZE` e `CSize`\
      `WORD`
   :::column-end:::
:::row-end:::

> [!NOTE]
> Per archiviare e caricare `CObject` i tramite un archivio è necessario prestare particolare attenzione. Per altre informazioni, vedere [archiviazione e caricamento di CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

Gli `CArchive` **`<<`** **`>>`** operatori e restituiscono sempre un riferimento all' `CArchive` oggetto, che è il primo operando. In questo modo è possibile concatenare gli operatori, come illustrato di seguito:

[!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
