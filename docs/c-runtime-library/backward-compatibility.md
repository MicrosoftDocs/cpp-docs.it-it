---
title: "Compatibilità con le versioni precedenti | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.programs
dev_langs: C++
helpviewer_keywords:
- CRT, compatibility
- backward compatibility, C run-time libraries
- compatibility, C run-time libraries
- backward compatibility
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8ffcc5ab1f50c474ed0ecf4d014419111682b85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="backward-compatibility"></a>Compatibilità con le versioni precedenti
Per la compatibilità tra le versioni di prodotto, la libreria OLDNAMES.LIB esegue il mapping dei nomi precedenti ai nuovi nomi. Ad esempio, viene eseguito il mapping di `open` a `_open`. È necessario collegarsi in modo esplicito a OLDNAMES.LIB solo quando si esegue la compilazione con le seguenti combinazioni di opzioni della riga di comando:  
  
-   `/Zl` (omettere il nome della libreria predefinita dal file oggetto) e `/Ze` (predefinito, utilizzare le estensioni Microsoft)  
  
-   `/link` (controllo linker), `/NOD` (nessuna ricerca di libreria predefinita) e `/Ze`  
  
 Per altre informazioni sulle opzioni della riga di comando del compilatore, vedere [Opzioni del compilatore](../build/reference/compiler-options.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)