---
title: "CString Semantics | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istruzioni di assegnazione, assigning CString objects"
  - "CString objects, assignment semantics"
  - "semantics in Cstring"
ms.assetid: d4023480-526f-499a-85f6-324b4de5b85f
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CString Semantics
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Anche se gli oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md) sono oggetti dinamici che possono aumentare, operano come i tipi primitivi incorporati e le classi semplici.  Ogni oggetto `CString` rappresenta un valore univoco.  Gli oggetti di`CString` devono essere considerati come le stringhe effettive anziché come puntatori alle stringhe.  
  
 È possibile assegnare un oggetto **CString** a un altro.  Tuttavia, quando si modifica uno degli oggetti `CString`, altri oggetti `CString` non viene modificato, come illustrato nel seguente esempio:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/CPP/cstring-semantics_1.cpp)]  
  
 Nota nell'esempio che i due oggetti `CString` sono considerati "equals" perché rappresentano la stessa stringa di caratteri.  La classe `CString` esegue l'overload dell'operatore di uguaglianza \(`==`\) per confrontare due oggetti `CString` in base al valore \(contenuto\) invece che l'identità \(indirizzo\).  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)