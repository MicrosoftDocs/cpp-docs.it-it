---
title: ATL (Registrar) e Backus Nauer Form sintassi (BNF) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- BNF notation
- Backus Nauer Form (BNF) syntax
ms.assetid: 994bbef0-9077-4aa8-bdfe-b7e830af9acc
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01d364313420c0a950f8eba222e3ae020fbd86cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="understanding-backus-nauer-form-bnf-syntax"></a>Informazioni sulla sintassi BNF (Form) Backus Nauer
Gli script utilizzati da ATL (Registrar) sono descritte in questo argomento utilizzando la sintassi BNF, che usa la notazione illustrata nella tabella seguente.  
  
|Convenzione/simboli|Significato|  
|------------------------|-------------|  
|`::=`|Equivalente|  
|`&#124;`|OR|  
|`X+`|Uno o più `X`s.|  
|`[X]`|`X` è facoltativo. I delimitatori facoltativi sono contrassegnati da `[]`.|  
|Qualsiasi **grassetto** testo|Un valore letterale stringa.|  
|Qualsiasi *corsivo* testo|Come costruire il valore letterale stringa.|  
  
 Come indicato nella tabella precedente, script di registrazione utilizzare valori letterali stringa. Questi valori sono il testo effettivo che deve essere presente nello script. Nella tabella seguente vengono descritte le stringhe letterali utilizzate in uno script di ATL (Registrar).  
  
|Valore letterale stringa|Operazione|  
|--------------------|------------|  
|**ForceRemove**|Rimuove completamente la successiva chiave (se presente) e quindi ricreata.|  
|**NoRemove**|Non rimuove il tasto successivo durante l'annullamento della registrazione.|  
|**Val**|Specifica che `<Key Name>` è effettivamente un valore denominato.|  
|**Eliminazione**|Elimina la successiva chiave durante la registrazione.|  
|**s**|Specifica che il valore successivo è una stringa (**REG_SZ**).|  
|**d**|Specifica che il valore successivo è un **DWORD** (**REG_DWORD**).|  
|**m**|Specifica che il valore successivo è una valore multistringa (**REG_MULTI_SZ**).|  
|**b**|Specifica che il valore successivo è un valore binario (**REG_BINARY**).|  
  
## <a name="bnf-syntax-examples"></a>Esempi di sintassi BNF  
 Di seguito sono riportati alcuni esempi di sintassi che consentono di comprendere il funzionano i valori letterali stringa e la notazione in uno script di ATL (Registrar).  
  
### <a name="syntax-example-1"></a>Esempio di sintassi 1  
  
```  
<registry expression> ::= <Add Key>  
```  
  
 Specifica che `registry expression` equivale a `Add Key`.  
  
### <a name="syntax-example-2"></a>Esempio di sintassi 2  
  
```  
<registry expression> ::= <Add Key> | <Delete Key>  
```  
  
 Specifica che `registry expression` è equivalente a una `Add Key` o `Delete Key`.  
  
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
  
 Specifica che `AlphaNumeric` è equivalente a qualsiasi carattere diverso da NULL.  
  
### <a name="syntax-example-6"></a>Esempio di sintassi 6  
  
```  
val 'testmulti' = m 'String 1\0String 2\0'  
```  
  
 Specifica che il nome della chiave `testmulti` è un valore multistringa composto `String 1` e `String 2`.  
  
### <a name="syntax-example-7"></a>Esempio di sintassi 7  
  
```  
val 'testhex' = d '&H55'  
```  
  
 Specifica che il nome della chiave `testhex` è un **DWORD** valore impostato su 55 esadecimale (decimale 85). Si noti che è conforme al formato di **& H** notazione come incluso nelle specifiche di Visual Basic.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)

