---
title: Registrare l'utilizzo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
ms.assetid: ce58e2cf-afd3-4068-980e-28a209298265
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 705a8fef3043498c041ea7e5490a7b22c1db8e5d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="register-usage"></a>Utilizzo dei registri
L'architettura [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] fornisce 16 registri di uso generale (in seguito indicati come registri Integer) e 16 registri XMM/YMM disponibili per l'uso con virgola mobile. I registri volatili sono registri temporanei che il chiamante suppone vengano eliminati con una chiamata. I registri non volatili devono conservare i relativi valori durante le chiamate di funzione e, se usati, devono essere salvati dal chiamante.  
  
 Nella tabella seguente viene descritto il modo in cui ogni registro viene usato durante le chiamate di funzione:  
  
||||  
|-|-|-|  
|Registrazione|Stato|Utilizzo|  
|RAX|Volatile|Registro del valore restituito|  
|RCX|Volatile|Primo argomento Integer|  
|RDX|Volatile|Secondo argomento Integer|  
|R8|Volatile|Terzo argomento Integer|  
|R9|Volatile|Quarto argomento Integer|  
|R10:R11|Volatile|Deve essere mantenuto in base alle esigenze del chiamante. Viene usato nelle istruzioni syscall/sysret.|  
|R12:R15|Non volatile|Deve essere mantenuto dal chiamato.|  
|RDI|Non volatile|Deve essere mantenuto dal chiamato.|  
|RSI|Non volatile|Deve essere mantenuto dal chiamato.|  
|RBX|Non volatile|Deve essere mantenuto dal chiamato.|  
|RBP|Non volatile|Può essere usato come puntatore ai frame. Deve essere mantenuto dal chiamato.|  
|RSP|Non volatile|Puntatore dello stack|  
|XMM0, YMM0|Volatile|Primo argomento FP; primo argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM1, YMM1|Volatile|Secondo argomento FP; secondo argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM2, YMM2|Volatile|Terzo argomento FP; terzo argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM3, YMM3|Volatile|Quarto argomento FP; quarto argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM4, YMM4|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; quinto argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM5, YMM5|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; sesto argomento di tipo vettore quando si usa `__vectorcall`.|  
|XMM6:XMM15, YMM6:YMM15|Non volatile (XMM), volatile (metà superiore di YMM)|Deve essere mantenuto dal chiamato. I registri YMM devono essere mantenuti in base alle esigenze del chiamante.|  
  
## <a name="see-also"></a>Vedere anche  
 [x64 convenzioni del software](../build/x64-software-conventions.md)   
 [__vectorcall](../cpp/vectorcall.md)
