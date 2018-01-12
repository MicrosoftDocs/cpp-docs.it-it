---
title: '-Zc: auto (deduzione del tipo di variabile) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /Zc:auto
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- Deduce variable type (C++)
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dd2f0ff353e1243685c94da0c28f29e810b2a9ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcauto-deduce-variable-type"></a>/Zc:auto (deduzione del tipo di variabile)
Il **/Zc: auto [-]** l'opzione del compilatore indica al compilatore come usare il [parola chiave auto](../../cpp/auto-keyword.md) per dichiarare le variabili. Se si specifica l'opzione predefinita, **/Zc: Auto**, il compilatore deduce il tipo di variabile dichiarata dall'espressione di inizializzazione. Se si specifica **/Zc:auto-**, il compilatore alloca la variabile alla classe di archiviazione automatica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:auto[-]  
```  
  
## <a name="remarks"></a>Note  
 Lo standard C++ definisce un significato originale e uno rivisto per la parola chiave `auto`. Prima di [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], la parola chiave dichiara una variabile nella classe di archiviazione automatica; ovvero, una variabile che ha una durata locale. A partire da [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], la parola chiave deduce il tipo di una variabile dall'espressione di inizializzazione della dichiarazione. Utilizzare il **/Zc: auto [-]** dell'opzione del compilatore indicano al compilatore di utilizzare il significato originale o rivisto del `auto` (parola chiave).  
  
 Il compilatore emette un messaggio di diagnostica appropriato se l'uso della parola chiave `auto` contraddice l'opzione del compilatore corrente. Per ulteriori informazioni, vedere [parola chiave auto](../../cpp/auto-keyword.md). Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **le proprietà di configurazione** nodo.  
  
3.  Fare clic su di **C/C++** nodo.  
  
4.  Fare clic su di **riga di comando** nodo.  
  
5.  Aggiungere **/Zc: Auto** o **/Zc:auto-** per il **opzioni aggiuntive:** riquadro.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)   
 [Auto (parola chiave)](../../cpp/auto-keyword.md)