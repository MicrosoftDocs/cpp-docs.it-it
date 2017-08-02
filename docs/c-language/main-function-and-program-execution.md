---
title: Funzione main ed esecuzione di programmi | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- program startup [C++]
- entry points, program
- main function, program execution
- startup code, main function
- main function
- programs [C++], terminating
ms.assetid: 5984f1bd-072d-4e06-8640-122fb1454401
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 22a1294a8b9206d5c2f190f2c391fd83cd57841d
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="main-function-and-program-execution"></a>Funzione main ed esecuzione di programmi
Ogni programma C Ha una funzione principale che deve essere denominata **main**. Se il codice è conforme al modello di programmazione Unicode, è possibile usare la versione a caratteri wide della funzione **main**, **wmain**. La funzione **main** funge da punto iniziale per l'esecuzione del programma. Generalmente, controlla l'esecuzione del programma indirizzando le chiamate alle altre funzioni del programma. In genere, l'esecuzione del programma si interrompe alla fine della funzione **main**, anche se può terminare in altri punti per diversi motivi. Talvolta, quando viene rilevato un determinato errore, è possibile forzare la chiusura di un programma. A tale scopo, usare la funzione **exit**. Per altre informazioni su questo argomento e per vedere un esempio di uso della funzione *exit*, vedere [Informazioni di riferimento per la libreria run-time](../c-runtime-library/reference/exit-exit-exit.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
main( int argc, char *argv[ ], char *envp[ ] )  
```  
  
## <a name="remarks"></a>Note  
 Le funzioni nel programma di origine eseguono una o più attività specifiche. La funzione **main** può chiamare queste funzioni per eseguire le attività corrispondenti. Se **main** chiama un'altra funzione, passa il controllo dell'esecuzione a tale funzione, che viene eseguita a partire dalla sua prima istruzione. Una funzione restituisce il controllo a **main** quando viene eseguita un'istruzione `return` o quando viene raggiunta la fine della funzione.  
  
 È possibile dichiarare una funzione, inclusa la funzione **main**, in modo che debba ricevere parametri. Il termine "parametro" o "parametro formale" si riferisce all'identificatore che riceve un valore passato a una funzione. Per altre informazioni sul passaggio di argomenti ai parametri, vedere [Parametri](../c-language/parameters.md). Quando una funzione chiama un'altra funzione, la funzione chiamata riceve i valori per i relativi parametri dalla funzione chiamante. Questi valori sono denominati "argomenti". È possibile dichiarare parametri formali per la funzione **main** perché questa possa ricevere argomenti dalla riga di comando. A questo scopo, usare il formato seguente:  
  
 Se si vogliono passare informazioni alla funzione **main**, i parametri vengono tradizionalmente denominati `argc` e `argv`, anche se per il compilatore C questi nomi non sono obbligatori. I tipi per `argc` e `argv` sono definiti dal linguaggio C. In genere, se alla funzione **main** viene passato un terzo parametro, questo viene denominato `envp`. Negli esempi riportati più avanti in questa sezione viene illustrato come utilizzare questi tre parametri per accedere agli argomenti della riga di comando. Nelle sezioni seguenti vengono descritti questi parametri.  
  
 Vedere [Uso di wmain](../c-language/using-wmain.md) per una descrizione della versione a caratteri wide di **main**.  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
