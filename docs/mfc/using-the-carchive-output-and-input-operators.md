---
title: Utilizzo di &lt; &lt; CArchive e &gt; &gt; degli operatori
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], loading from previously stored values
- CArchive class [MFC], storing and loading objects
- CArchive class [MFC], operators
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
ms.openlocfilehash: 91ea565867cc0cb3b27ad9d5597037b637cb6544
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368966"
---
# <a name="using-the-carchive-ltlt-and-gtgt-operators"></a>Utilizzo di &lt; &lt; CArchive e &gt; &gt; degli operatori

`CArchive`fornisce \< operatori <e >> per la scrittura `CObject`e la lettura di tipi di dati semplici, nonché s da e verso un file.

#### <a name="to-store-an-object-in-a-file-via-an-archive"></a>Per archiviare un oggetto in un file tramite un archivio

1. L'esempio seguente mostra come archiviare un oggetto in un file tramite un archivio:The following example shows how to store an object in a file via an archive:

   [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_1.cpp)]

#### <a name="to-load-an-object-from-a-value-previously-stored-in-a-file"></a>Per caricare un oggetto da un valore precedentemente memorizzato in un file

1. L'esempio seguente mostra come caricare un oggetto da un valore precedentemente memorizzato in un file:

   [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_2.cpp)]

In genere, i dati vengono archiviati e caricati da e verso un file tramite un archivio nelle `Serialize` funzioni delle `CObject`classi derivate, che è necessario aver dichiarato con la macro DECLARE_SERIALIZE. Un riferimento `CArchive` a un oggetto `Serialize` viene passato alla funzione. Chiamare la `IsLoading` funzione `CArchive` dell'oggetto per `Serialize` determinare se la funzione è stata chiamata per caricare i dati dal file o archiviare i dati nel file.

La `Serialize` funzione di una `CObject`classe derivata serializzabile ha in genere il seguente formato:

[!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_3.cpp)]

Il modello di codice precedente è esattamente lo `Serialize` stesso di quello creato da `CDocument`AppWizard per la funzione del documento (una classe derivata da ). Questo modello di codice consente di scrivere codice più facile da esaminare, perché il codice di archiviazione e il codice di caricamento devono essere sempre paralleli, come nell'esempio seguente:This code template helps you write code that is easier to review, because the storing code and the loading code should always be parallel, as in the following example:

[!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_4.cpp)]

La libreria ** < ** definisce `CArchive` e **>>** gli operatori come primo operando e i seguenti tipi di dati e tipi di classe come secondo operando:

||||
|-|-|-|
|`CObject*`|**DIMENSIONE** e`CSize`|**Galleggiante**|
|**WORD**|`CString`|**PUNTO** E`CPoint`|
|`DWORD`|**BYTE**|`RECT` e `CRect`|
|**Doppia**|**Lungo**|`CTime` e `CTimeSpan`|
|`Int`|**COleCurrency**|`COleVariant`|
|`COleDateTime`|`COleDateTimeSpan`||

> [!NOTE]
> L'archiviazione `CObject`e il caricamento di s tramite un archivio richiede una considerazione aggiuntiva. Per ulteriori informazioni, vedere [Archiviazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

Il <**>>** `CArchive` ** \< ** e gli operatori di CArchive restituiscono sempre un riferimento all'oggetto, che è il primo operando. Ciò consente di concatenare gli operatori, come illustrato di seguito:This enables you to chain the operators, as illustrated below:

[!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
