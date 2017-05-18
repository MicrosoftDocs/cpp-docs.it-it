---
title: Errore irreversibile C1092 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1092
dev_langs:
- C++
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 6cad5222fb0d97594d5b13b5cf8903eb2934ee88
ms.openlocfilehash: 6d93fd662b638126e21d5f5f034138c0e6f0e0ad
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="fatal-error-c1092"></a>Errore irreversibile C1092
Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione  
  
 È stato modificato o aggiunto un tipo di dati dall'ultima compilazione ha esito positivo.  
  
-   Modifica e continuazione non supporta le modifiche ai tipi di dati esistenti, comprese le definizioni di classe, struct o enum. È necessario interrompere il debug e compilare l'applicazione.  
  
-   Modifica e continuazione non supporta l'aggiunta di nuovi tipi di dati se un file di database di programma, ad esempio vc*x*=&0;. pdb (dove *x* è il numero di versione principale di Visual C++ in uso) è di sola lettura. Per aggiungere tipi di dati, il compilatore deve aprire il file con estensione PDB in modalità scrittura.  
  
### <a name="to-remove-this-error-without-ending-the-current-debug-session"></a>Per correggere l'errore senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente  
  
1.  Scegliere **Arresta debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compilazione**.  
  
 Per ulteriori informazioni, vedere il [modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).
