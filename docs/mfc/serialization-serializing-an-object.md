---
title: 'Serializzazione: Serializzazione di un oggetto | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- serializing objects [MFC]
- serialization [MFC], objects
- objects [MFC], serializing
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 37e688a3619cd203e61997999a9b7eb7651d73fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="serialization-serializing-an-object"></a>Serializzazione: serializzazione di un oggetto
L'articolo [serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md) viene illustrato come creare una classe serializzabile. Dopo aver creato una classe serializzabile, è possibile serializzare gli oggetti di classe da e verso un file mediante un [CArchive](../mfc/reference/carchive-class.md) oggetto. In questo articolo viene descritto quanto segue:  
  
-   [Definizione di oggetto CArchive è](../mfc/what-is-a-carchive-object.md).  
  
-   [Due modi per creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md).  
  
-   [Come utilizzare CArchive <\< e >> operatori](../mfc/using-the-carchive-output-and-input-operators.md).  
  
-   [Memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).  
  
 È possibile impostare il framework in modo da creare automaticamente l'archivio per il documento serializzabile oppure è possibile creare esplicitamente l'oggetto `CArchive` in modo manuale. È possibile trasferire dati tra l'oggetto serializzabile e un file utilizzando il <\< e >> operatori per `CArchive` o, in alcuni casi, chiamando la `Serialize` funzione di un `CObject`-classe derivata.  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione](../mfc/serialization-in-mfc.md)

