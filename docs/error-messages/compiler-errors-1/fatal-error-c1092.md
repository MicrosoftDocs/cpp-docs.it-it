---
title: Errore irreversibile C1092 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1092
dev_langs:
- C++
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8f5b5d903fe1fb2d3182a7b08f7bf82ddf334fb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33199249"
---
# <a name="fatal-error-c1092"></a>Errore irreversibile C1092
Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione  
  
 È stato modificato o aggiunto un tipo di dati dall'ultima compilazione riuscita.  
  
-   Modifica e continuazione non supporta modifiche ai tipi di dati, comprese le definizioni di classe, struct o enum. È necessario arrestare il debug e compilare l'applicazione.  
  
-   Modifica e continuazione non supporta l'aggiunta di nuovi tipi di dati, se un file di database di programma, ad esempio vc*x*pdb 0 (in cui *x* è il numero di versione principale di Visual C++ in uso) è di sola lettura. Per aggiungere tipi di dati, il compilatore è necessario aprire il file con estensione PDB in modalità scrittura.  
  
### <a name="to-remove-this-error-without-ending-the-current-debug-session"></a>Per correggere l'errore senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente  
  
1.  Scegliere **Arresta debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compilazione**.  
  
 Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).