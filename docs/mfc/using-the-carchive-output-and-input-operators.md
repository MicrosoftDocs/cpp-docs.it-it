---
title: Utilizzare CArchive &lt; &lt; e &gt; &gt; operatori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CArchive
dev_langs: C++
helpviewer_keywords:
- objects [MFC], loading from previously stored values
- CArchive class [MFC], storing and loading objects
- CArchive class [MFC], operators
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 77bb27558c702d8d10dcbf5e50f369d8d0479716
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-the-carchive-ltlt-and-gtgt-operators"></a>Utilizzare CArchive &lt; &lt; e &gt; &gt; operatori
`CArchive`fornisce <\< e >> operatori per la scrittura e lettura di tipi di dati semplici nonché `CObject`s a e da un file.  
  
#### <a name="to-store-an-object-in-a-file-via-an-archive"></a>Per archiviare un oggetto in un file tramite un archivio  
  
1.  Nell'esempio seguente viene illustrato come archiviare un oggetto in un file tramite un archivio:  
  
     [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_1.cpp)]  
  
#### <a name="to-load-an-object-from-a-value-previously-stored-in-a-file"></a>Per caricare un oggetto da un valore archiviato in precedenza in un file  
  
1.  Nell'esempio seguente viene illustrato come caricare un oggetto da un valore archiviato in precedenza in un file:  
  
     [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_2.cpp)]  
  
 In genere, archiviare e caricare i dati da e verso un file tramite un archivio nel `Serialize` funzioni di `CObject`-classi derivate, che devono essere dichiarato con la **DECLARE_SERIAL** (macro). Un riferimento a un `CArchive` oggetto viene passato per il `Serialize` (funzione). Chiamare il `IsLoading` funzione del `CArchive` oggetto per determinare se il `Serialize` funzione è stata chiamata per caricare i dati dal file o archiviare dati nel file.  
  
 Il `Serialize` funzione di un tipo serializzabile `CObject`-classe derivata ha in genere il formato seguente:  
  
 [!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_3.cpp)]  
  
 Il modello di codice precedente è esattamente lo stesso di quello che crea la creazione guidata applicazione per il `Serialize` funzione del documento (una classe derivata da **CDocument)**. Questo modello di codice consente di scrivere codice che è più facile da esaminare, perché il codice di archiviazione e di caricamento deve essere sempre paralleli, come nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_4.cpp)]  
  
 La libreria definisce  **< \<**  e  **>>**  operatori per `CArchive` come il primo operando e i seguenti tipi di dati e i tipi di classe come il secondo operando :  
  
||||  
|-|-|-|  
|`CObject*`|**DIMENSIONI e CSize**|**float**|  
|**WORD**|`CString`|**PUNTO** e`CPoint`|  
|`DWORD`|**BYTE**|`RECT` e `CRect`|  
|**Double**|**LONG**|`CTime` e `CTimeSpan`|  
|`Int`|**COleCurrency**|`COleVariant`|  
|`COleDateTime`|`COleDateTimeSpan`||  
  
> [!NOTE]
>  Memorizzazione e caricamento `CObject`tramite un archivio richiede attenzione aggiuntiva. Per ulteriori informazioni, vedere [memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).  
  
 Il **CArchive <\<**  e  **>>**  operatori restituiscono sempre un riferimento di `CArchive` oggetto, ovvero il primo operando. Ciò consente di concatenare gli operatori, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/cpp/using-the-carchive-output-and-input-operators_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

