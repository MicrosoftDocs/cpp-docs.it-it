---
title: 'Main: avvio del programma | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc.main.startup
- _tmain
dev_langs:
- C++
helpviewer_keywords:
- program startup [C++]
- entry points, program
- wmain function
- _tmain function
- startup code, main function
- main function, program startup
ms.assetid: f9581cd6-93f7-4bcd-99ec-d07c3c107dd4
caps.latest.revision: 9
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 7d6bc27c3d0bca392aa83c7ac599bfe329d3037e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="main-program-startup"></a>main: avvio del programma
Una funzione speciale denominata `main` è il punto iniziale di esecuzione per tutti i programmi C e C++. Se si scrive il codice conforme al modello di programmazione [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)], è possibile utilizzare `wmain` che è la versione a caratteri wide di `main`.  
  
 La funzione `main` non è predefinita dal compilatore. Deve essere fornita nel testo di programma.  
  
 La sintassi di dichiarazione per `main` è  
  
```  
int main();  
```  
  
 o, facoltativamente,  
  
```  
int main(int argc, char *argv[], char *envp[]);  
```  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La sintassi di dichiarazione per `wmain` è la seguente:  
  
```  
int wmain( );  
```  
  
 o, facoltativamente,  
  
```  
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);  
```  
  
 È inoltre possibile utilizzare `_tmain`, definito in TCHAR.h. `_tmain` si risolve in `main` a meno che _UNICODE non sia definito. In tal caso, `_tmain` si risolve in `wmain`.  
  
 In alternativa, la dichiarazione delle funzioni `main` e `wmain` prevede la restituzione di `void` (nessun valore restituito). Se si dichiara `main` o `wmain` la restituzione di `void`, è Impossibile restituire un codice di uscita al processo padre o del sistema operativo utilizzando una [restituire](../cpp/return-statement-in-program-termination-cpp.md) istruzione. Per restituire un codice di uscita quando `main` o `wmain` è dichiarato come `void`, è necessario utilizzare il [uscire](../cpp/exit-function.md) (funzione).  
  
**Fine sezione specifica Microsoft**  
 I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc`, `argv` e `envp` sono tradizionali, ma non sono richiesti dal compilatore. Per ulteriori informazioni e un esempio, vedere [definizioni di argomenti](../cpp/argument-definitions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Utilizzo di wmain anziché di main](../cpp/using-wmain-instead-of-main.md)   
 [Limitazioni della funzione main](../cpp/main-function-restrictions.md)
