---
title: 'Main: avvio del programma | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2f78a122837fc2cb9a89083d5be8fd2b488c1772
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939224"
---
# <a name="main-program-startup"></a>main: avvio del programma
Una speciale funzione denominata `main` è il punto iniziale di esecuzione per tutti i programmi C e C++. Se si scrive il codice conforme al modello di programmazione [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)], è possibile utilizzare `wmain` che è la versione a caratteri wide di `main`.  
  
 La funzione `main` non è predefinita dal compilatore. Deve essere fornita nel testo di programma.  
  
 La sintassi di dichiarazione per `main` è  
  
```cpp 
int main();  
```  
  
 o, facoltativamente,  
  
```cpp 
int main(int argc, char *argv[], char *envp[]);  
```  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La sintassi di dichiarazione per `wmain` è la seguente:  
  
```cpp 
int wmain( );  
```  
  
 o, facoltativamente,  
  
```cpp 
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);  
```  
  
 È inoltre possibile utilizzare `_tmain`, definito in TCHAR.h. `_tmain` si risolve in `main` a meno che _UNICODE non sia definito. In tal caso, `_tmain` si risolve in `wmain`.  
  
 In alternativa, il `main` e `wmain` le funzioni possono essere dichiarate come restituzione **void** (nessun valore restituito). Se si dichiara `main` oppure `wmain` prevede la restituzione **void**, è possibile restituire un codice di uscita al processo padre o al sistema operativo usando una [restituire](../cpp/return-statement-in-program-termination-cpp.md) istruzione. Per restituire una codice di uscita quando `main` oppure `wmain` viene dichiarato come **void**, è necessario usare il [uscire](../cpp/exit-function.md) (funzione).  
  
**Fine sezione specifica Microsoft**  
 I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc`, `argv` e `envp` sono tradizionali, ma non sono richiesti dal compilatore. Per altre informazioni e un esempio, vedere [definizioni di argomenti](../cpp/argument-definitions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Utilizzo di wmain anziché di main](../cpp/using-wmain-instead-of-main.md)   
 [limitazioni sulla funzione Main](../cpp/main-function-restrictions.md)   
 [Analisi di argomenti della riga di comando C++](../cpp/parsing-cpp-command-line-arguments.md)
