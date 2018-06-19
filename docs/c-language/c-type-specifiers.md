---
title: Identificatori di tipi C | Microsoft Docs
ms.custom: ''
ms.date: 01/29/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- type specifiers, C
- specifiers, type
ms.assetid: fbe13441-04c3-4829-b047-06d374adc2b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e37ac421627d4c4503d75eaf65188bbe234af015
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32388383"
---
# <a name="c-type-specifiers"></a>Identificatori di tipi C

Gli identificatori di tipo nelle dichiarazioni definiscono il tipo di una dichiarazione di funzione o variabile.

## <a name="syntax"></a>Sintassi

*type-specifier*:  
&nbsp;&nbsp;**void**  
&nbsp;&nbsp;**char**  
&nbsp;&nbsp;**short**  
&nbsp;&nbsp;**int**  
&nbsp;&nbsp;**long**  
&nbsp;&nbsp;**float**  
&nbsp;&nbsp;**double**  
&nbsp;&nbsp;**signed**  
&nbsp;&nbsp;**unsigned**  
&nbsp;&nbsp;*struct-or-union-specifier*  
&nbsp;&nbsp;*enum-specifier*  
&nbsp;&nbsp;*typedef-name*  

I tipi **signed char**, **signed int**, **signed short int** e **signed long int** insieme alle relative controparti **unsigned** e a **enum** vengono denominati tipi *integrali*. Gli identificatori di tipo **float**, **double** e **long double** vengono denominati tipi *mobili* o *a virgola mobile*. È possibile utilizzare qualsiasi identificatore di tipo a virgola mobile o integrale in una dichiarazione di funzione o variabile. Se un *type-specifier* non viene specificato in una dichiarazione, si presuppone che sia **int**.

Le parole chiave facoltative **signed** e **unsigned** possono precedere o seguire uno dei tipi integrali eccetto **enum** e possono anche essere usate da sole come identificatori di tipo, nel qual caso vengono riconosciute rispettivamente come **signed int** e **unsigned int**. Se usata da sola, la parola chiave **int** viene interpretata come **signed**. Se usate da sole, le parole chiave **long** e **short** vengono interpretate come **long int** e **short int**.

I tipi di enumerazione sono considerati tipi di base. Gli identificatori di tipo per i tipi di enumerazione sono illustrati in [Dichiarazioni di enumerazioni](../c-language/c-enumeration-declarations.md).

La parola chiave **void** ha tre utilizzi: specificare un tipo restituito dalla funzione, specificare un elenco di tipi di argomento per una funzione che non accetta argomenti e specificare un puntatore a un tipo non specificato. È possibile usare il tipo **void** per dichiarare le funzioni che non restituiscono valori o per dichiarare un puntatore a un tipo non specificato. Vedere [Argomenti](../c-language/arguments.md) per informazioni su **void** quando viene visualizzato da solo tra parentesi dopo il nome di una funzione.

**Sezione specifica Microsoft**

Il controllo dei tipi è ora conforme ad ANSI, pertanto il tipo **short** e il tipo **int** sono tipi distinti. Ad esempio, questa è una ridefinizione del compilatore Microsoft C che è stata accettata da versioni precedenti del compilatore.

```C
int   myfunc();
short myfunc();
```

Nell'esempio seguente viene inoltre generato un avviso su un riferimento indiretto a tipi diversi:

```C
int *pi;
short *ps;

ps = pi;  /* Now generates warning */
```

Il compilatore Microsoft C genera inoltre gli avvisi per le differenze nel segno. Ad esempio:

```C
signed int *pi;
unsigned int *pu

pi = pu;  /* Now generates warning */
```

Le espressioni di tipo **void** vengono valutate per gli effetti collaterali. Non è possibile usare il valore (inesistente) di un'espressione con tipo **void** in nessun modo, né convertire un'espressione **void** (mediante conversione implicita o esplicita) in un qualsiasi tipo eccetto **void**. Se si usa un'espressione di qualsiasi altro tipo in un contesto in cui viene richiesta un'espressione **void**, il valore viene rimosso.

Per essere conforme alla specifica ANSI, **void\*\*** non può essere usato come **int\*\***. Solo **void\*** può essere usato come puntatore a un tipo non specificato.

**Fine sezione specifica Microsoft**

È possibile creare identificatori di tipo aggiuntivi con dichiarazioni **typedef**, come descritto in [Dichiarazioni typedef](../c-language/typedef-declarations.md). Per informazioni sulle dimensioni di ogni tipo vedere [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md).

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)  
