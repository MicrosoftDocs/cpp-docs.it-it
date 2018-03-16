---
title: Dichiaratori e dichiarazioni di variabili | Microsoft Docs
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
- declaring variables, declarators
- declarators, definition
- declaring variables, declaration statements
ms.assetid: 5fd67a6a-3a6a-4ec9-b257-3f7390a48d40
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2d9b7ce4895d51c50185c5262664dc478af62cfa
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="declarators-and-variable-declarations"></a>Dichiaratori e dichiarazioni di variabili
Nel resto di questa sezione viene descritto il formato e il significato delle dichiarazioni dei tipi di variabile contenuti in questo elenco. In particolare, nelle sezioni rimanenti viene illustrato come dichiarare i seguenti elementi:  
  
|Il tipo di variabile|Descrizione|  
|----------------------|-----------------|  
|[Variabili semplici](../c-language/simple-variable-declarations.md)|Le variabili contenenti un singolo valore con tipo integrale o a virgola mobile|  
|[Array](../c-language/array-declarations.md)|Le variabili composte di una raccolta di elementi con lo stesso tipo|  
|[Puntatori](../c-language/pointer-declarations.md)|Le variabili che puntano ad altre variabili e che contengono le posizioni delle variabili (sotto forma di indirizzi) invece dei valori|  
|[Variabili di enumerazione](../c-language/c-enumeration-declarations.md)|Le variabili semplici con tipo integrale che contengono un valore derivante da un set di costanti Integer denominate|  
|[Strutture](../c-language/structure-declarations.md)|Le variabili composte di una raccolta di valori che può contenere tipi differenti|  
|[Unioni](../c-language/union-declarations.md)|Le variabili composte di diversi valori di tipi differenti che occupano lo stesso spazio di archiviazione|  
  
 Un dichiaratore è la parte di una dichiarazione che specifica il nome che deve essere introdotto nel programma. Può includere modificatori come **\*** (puntatore-a) e qualsiasi parola chiave della convenzione di chiamata Microsoft.  
  
 **Sezione specifica Microsoft**  
  
 Nel dichiaratore  
  
```  
__declspec(thread) char *var;  
```  
  
 `char` è l'identificatore di tipo, `__declspec(thread)` e `*` sono i modificatori e `var` è il nome dell'identificatore.  
  
 **Fine sezione specifica Microsoft**  
  
 È possibile utilizzare i dichiaratori per dichiarare le matrici di valori, i puntatori a valori e le funzioni che restituiscono i valori di un tipo specificato. I dichiaratori sono presenti nella matrice e nelle dichiarazioni del puntatore descritte più avanti in questa sezione.  
  
## <a name="syntax"></a>Sintassi  
 *declarator*:  
 &nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*  
  
 *direct-declarator*:  
 &nbsp;&nbsp;*identifier*  
 &nbsp;&nbsp;**(**  *declarator*  **)**  
 &nbsp;&nbsp;*direct-declarator*  **[**  *constant-expression*<sub>opt</sub> **]**  
 &nbsp;&nbsp;*direct-declarator*  **(**  *parameter-type-list*  **)**  
 &nbsp;&nbsp;*direct-declarator*  **(**  *identifier-list*<sub>opt</sub> **)**  
  
 *pointer*:  
 &nbsp;&nbsp;**\*** *type-qualifier-list*<sub>opt</sub>  
 &nbsp;&nbsp;**\*** *type-qualifier-list*<sub>opt</sub> *pointer*  
  
 *type-qualifier-list*:  
 &nbsp;&nbsp;*type-qualifier*  
 &nbsp;&nbsp;*type-qualifier-list type-qualifier*  
  
> [!NOTE]
>  Vedere la sintassi per *declaration* in [Cenni preliminari sulle dichiarazioni](../c-language/overview-of-declarations.md) o [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per informazioni sulla sintassi che fa riferimento a *declarator*.  
  
 Quando un dichiaratore è costituito da un identificatore non modificato, l'elemento dichiarato è un tipo di base. Se a sinistra di un identificatore è presente un asterisco (**\***), il tipo viene impostato su un tipo puntatore. Se l'identificatore è seguito da parentesi quadre (**[ ]**), il tipo viene modificato in un tipo di matrice. Se l'identificatore è seguito da parentesi tonde, il tipo viene modificato in un tipo di funzione. Per altre informazioni sull'interpretazione della precedenza all'interno delle dichiarazioni, vedere [Interpretazione di più dichiaratori complessi](../c-language/interpreting-more-complex-declarators.md).  
  
 Ogni dichiaratore dichiara almeno un identificatore. Per essere una dichiarazione completa, il dichiaratore deve includere un identificatore di tipo. L'identificatore di tipo fornisce il tipo di elementi di un tipo di matrice, il tipo di oggetto indirizzato da un tipo puntatore o il tipo restituito di una funzione.  
  
 Le dichiarazioni delle [matrici](../c-language/array-declarations.md) e dei [puntatori](../c-language/pointer-declarations.md) sono descritte in modo più dettagliato più avanti in questa sezione. Negli esempi seguenti sono illustrati alcuni semplici formati di dichiaratori:  
  
```  
int list[20]; // Declares an array of 20 int values named list  
char *cp;     // Declares a pointer to a char value  
double func( void ); // Declares a function named func, with no   
                     // arguments, that returns a double value  
int *aptr[10] // Declares an array of 10 pointers  
```  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore C Microsoft non limita il numero di dichiaratori che possono modificare un'operazione aritmetica, una struttura o un tipo di unione. Il loro numero è limitato solo dalla memoria disponibile.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)