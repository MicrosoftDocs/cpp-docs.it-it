---
title: Funzione membro ExitInstance | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
dev_langs:
- C++
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 99898a5e80c3f487c7f53fe81d13d3d1eb55ebd5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance
Il [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) funzione membro di classe [CWinApp](../mfc/reference/cwinapp-class.md) viene chiamato ogni volta che una copia di un'applicazione termina in genere a seguito di chiudere l'applicazione.  
  
 Eseguire l'override `ExitInstance` se è necessario che l'elaborazione pulizia speciale, ad esempio la liberazione di risorse di grafica device interface (GDI) o deallocazione di memoria utilizzata durante l'esecuzione del programma. Pulizia degli elementi standard, ad esempio documenti e visualizzazioni, tuttavia, viene fornita dal framework, con altre funzioni sottoponibili a override per operazioni di pulitura specifiche a tali oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
