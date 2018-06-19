---
title: Funzione membro ExitInstance | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords: []
dev_langs:
- C++
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 954d2248061ec571d9d2ba8804c1f7c97275cbfc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33343499"
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance
Il [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) funzione membro di classe [CWinApp](../mfc/reference/cwinapp-class.md) viene chiamato ogni volta che una copia di un'applicazione termina in genere a seguito di chiudere l'applicazione.  
  
 Eseguire l'override `ExitInstance` se è necessario che l'elaborazione pulizia speciale, ad esempio la liberazione di risorse di grafica device interface (GDI) o deallocazione di memoria utilizzata durante l'esecuzione del programma. Pulizia degli elementi standard, ad esempio documenti e visualizzazioni, tuttavia, viene fornita dal framework, con altre funzioni sottoponibili a override per operazioni di pulitura specifiche a tali oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
