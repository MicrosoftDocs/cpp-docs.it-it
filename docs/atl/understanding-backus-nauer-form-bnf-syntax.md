---
title: ATL (Registrar) e Backus Nauer Form (BNF) sintassi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- BNF notation
- Backus Nauer Form (BNF) syntax
ms.assetid: 994bbef0-9077-4aa8-bdfe-b7e830af9acc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf1033007a02ea21e7625068bc23d762c103aa41
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37854447"
---
# <a name="understanding-backus-nauer-form-bnf-syntax"></a>Informazioni sulla sintassi di Backus Nauer Form (BNF)
In questo argomento usando la sintassi BNF che usa la notazione del punto illustrata nella tabella seguente sono descritti gli script usati da ATL (Registrar).  
  
|Convenzione/simbolo|Significato|  
|------------------------|-------------|  
|::=|Equivalente|  
|&#124;|OR|  
|X +|Uno o più Xs.|  
|[X]|X è facoltativo. I delimitatori facoltativi sono indicati da \[].|  
|Eventuali **grassetto** testo|Un valore letterale stringa.|  
|Eventuali *corsivo* testo|Come costruire il valore letterale stringa.|  
  
 Come indicato nella tabella precedente, script di registrazione usare i valori letterali stringa. Questi valori sono text effettivi che devono essere visualizzati nello script. Nella tabella seguente vengono descritti i valori letterali stringa utilizzate in uno script ATL (Registrar).  
  
|Valore letterale stringa|Operazione|  
|--------------------|------------|  
|**ForceRemove**|Rimuove completamente il tasto successivo (se presente) e quindi ricreata.|  
|**NoRemove**|Non rimuove la successiva chiave durante l'annullamento della registrazione.|  
|**Val**|Specifica che `<Key Name>` è effettivamente un valore denominato.|  
|**Eliminazione**|Elimina la successiva chiave durante la registrazione.|  
|**s**|Specifica che il valore successivo è una stringa (REG_SZ).|  
|**d**|Specifica che il valore successivo è un valore DWORD (REG_DWORD).|  
|**m**|Specifica che il valore successivo è una valore multistringa (REG_MULTI_SZ).|  
|**b**|Specifica che il valore successivo è un valore binario (REG_BINARY).|  
  
## <a name="bnf-syntax-examples"></a>Esempi di sintassi BNF  
 Ecco alcuni esempi di sintassi che aiutano a comprendere come i valori letterali stringa e la notazione funzionano in uno script ATL (Registrar).  
  
### <a name="syntax-example-1"></a>Esempio di sintassi 1  
  
```  
<registry expression> ::= <Add Key>  
```  
  
 Specifica che `registry expression` equivale a `Add Key`.  
  
### <a name="syntax-example-2"></a>Esempio di sintassi 2  
  
```  
<registry expression> ::= <Add Key> | <Delete Key>  
```  
  
 Specifica che `registry expression` equivale a `Add Key` o `Delete Key`.  
  
### <a name="syntax-example-3"></a>Esempio di sintassi 3  
  
```  
<Key Name> ::= '<AlphaNumeric>+'  
```  
  
 Specifica che `Key Name` equivale a uno o più `AlphaNumerics`.  
  
### <a name="syntax-example-4"></a>Esempio di sintassi 4  
  
```  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
```  
  
 Specifica che `Add Key` equivale a `Key Name`e che i valori letterali stringa, `ForceRemove`, `NoRemove`, e `val`, sono facoltativi.  
  
### <a name="syntax-example-5"></a>Esempio di sintassi 5  
  
```  
<AlphaNumeric> ::= any character not NULL, that is, ASCII 0  
```  
  
 Specifica che `AlphaNumeric` equivale a qualsiasi carattere diverso da NULL.  
  
### <a name="syntax-example-6"></a>Esempio di sintassi 6  
  
```  
val 'testmulti' = m 'String 1\0String 2\0'  
```  
  
 Specifica che il nome della chiave `testmulti` è un valore multistringa costituito `String 1` e `String 2`.  
  
### <a name="syntax-example-7"></a>Esempio di sintassi 7  
  
```  
val 'testhex' = d '&H55'  
```  
  
 Specifica che il nome della chiave `testhex` è un valore DWORD impostato su 55 esadecimale (decimale 85). Questo formato è conforme alla nota la **& H** notazione come trovato nella specifica di Visual Basic.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)

