---
title: Uso degli operatori &lt;CArchive &lt; e &gt;&gt;
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], loading from previously stored values
- CArchive class [MFC], storing and loading objects
- CArchive class [MFC], operators
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
ms.openlocfilehash: 8e175f35f2218341c69571c818711596180df4a6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442180"
---
# <a name="using-the-carchive-ltlt-and-gtgt-operators"></a>Uso degli operatori &lt;CArchive &lt; e &gt;&gt;

`CArchive` fornisce <\< e > operatori > per la scrittura e la lettura di tipi di dati semplici, nonché di `CObject`da e verso un file.

#### <a name="to-store-an-object-in-a-file-via-an-archive"></a>Per archiviare un oggetto in un file tramite un archivio

1. Nell'esempio seguente viene illustrato come archiviare un oggetto in un file tramite un archivio:

   [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_1.cpp)]

#### <a name="to-load-an-object-from-a-value-previously-stored-in-a-file"></a>Per caricare un oggetto da un valore archiviato in precedenza in un file

1. Nell'esempio seguente viene illustrato come caricare un oggetto da un valore archiviato in precedenza in un file:

   [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_2.cpp)]

In genere, è possibile archiviare e caricare i dati da e verso un file tramite un archivio nella `Serialize` funzioni di classi derivate da `CObject`, che è necessario dichiarare con la macro DECLARE_SERIALIZE. Un riferimento a un oggetto `CArchive` viene passato alla funzione di `Serialize`. Chiamare la funzione `IsLoading` dell'oggetto `CArchive` per determinare se la funzione `Serialize` è stata chiamata per caricare i dati dal file o archiviare i dati nel file.

La funzione `Serialize` di una classe derivata da `CObject`serializzabile ha in genere il formato seguente:

[!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_3.cpp)]

Il modello di codice precedente è esattamente uguale a quello creato da Creazione guidata applicazioni per la funzione `Serialize` del documento, ovvero una classe derivata da `CDocument`. Questo modello di codice consente di scrivere codice più semplice da rivedere, perché il codice di archiviazione e il codice di caricamento devono essere sempre paralleli, come nell'esempio seguente:

[!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_4.cpp)]

La libreria definisce **<operatori \<** e **>>** per `CArchive` come primo operando e i tipi di dati e i tipi di classe seguenti come secondo operando:

||||
|-|-|-|
|`CObject*`|**Dimensioni** e `CSize`|**float**|
|**WORD**|`CString`|**Point** e `CPoint`|
|`DWORD`|**BYTE**|`RECT` e `CRect`|
|**Double**|**LONG**|`CTime` e `CTimeSpan`|
|`Int`|**COleCurrency**|`COleVariant`|
|`COleDateTime`|`COleDateTimeSpan`||

> [!NOTE]
>  Per archiviare e caricare `CObject`s tramite un archivio è necessario prestare particolare attenzione. Per altre informazioni, vedere [archiviazione e caricamento di CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

Gli operatori **< carchive\<** e **>>** restituiscono sempre un riferimento all'oggetto `CArchive`, ovvero il primo operando. In questo modo è possibile concatenare gli operatori, come illustrato di seguito:

[!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
