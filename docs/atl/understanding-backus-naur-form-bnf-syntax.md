---
title: Registrar ATL e sintassi Backus-Naur form (BNF)
ms.date: 05/14/2019
helpviewer_keywords:
- BNF notation
- Backus-Naur form (BNF) syntax
ms.assetid: 994bbef0-9077-4aa8-bdfe-b7e830af9acc
ms.openlocfilehash: 0f07a39863b586d524d060dc3df7117e2c930b3e
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168709"
---
# <a name="understanding-backus-naur-form-bnf-syntax"></a>Informazioni sulla sintassi Backus-Naur form (BNF)

Gli script usati dal registrar ATL sono descritti in questo argomento usando la sintassi BNF, che impiega la notazione illustrata nella tabella seguente.

|Convenzione/simbolo|Significato|
|------------------------|-------------|
|::=|Equivalente|
|&#124;|OR|
|X+|Uno o più X.|
|\[X]|X è facoltativo. I delimitatori facoltativi sono indicati da \[].|
|Testo in **grassetto**|Un valore letterale stringa.|
|Testo in *corsivo*|Come costruire il valore letterale stringa.|

Come indicato nella tabella precedente, gli script di registrazione usano valori letterali stringa. Questi valori sono il testo effettivo che deve essere inserito nello script. Nella tabella seguente vengono descritti i valori letterali stringa usati in uno script di registrazione ATL.

|Valore letterale stringa|Azione|
|--------------------|------------|
|**ForceRemove**|Rimuove completamente la chiave successiva (se presente) e quindi la ricrea.|
|**NoRemove**|Non rimuove la chiave successiva durante l'annullamento della registrazione.|
|**Val**|Specifica che `<Key Name>` è effettivamente un valore denominato.|
|**Elimina**|Elimina la chiave successiva durante la registrazione.|
|**s**|Specifica che il valore successivo è una stringa (REG_SZ).|
|**d**|Specifica che il valore successivo è un valore DWORD (REG_DWORD).|
|**m**|Specifica che il valore successivo è un valore multistringa (REG_MULTI_SZ).|
|**b**|Specifica che il valore successivo è un valore binario (REG_BINARY).|

## <a name="bnf-syntax-examples"></a>Esempi di sintassi BNF

Ecco alcuni esempi di sintassi che aiutano a comprendere come funzionano la notazione e i valori letterali stringa in uno script di registrazione ATL.

### <a name="syntax-example-1"></a>Esempio di sintassi 1

> \<espressione registro di sistema>: \<: = aggiungi chiave>

specifica che `registry expression` equivale a `Add Key`.

### <a name="syntax-example-2"></a>Esempio di sintassi 2

> \<espressione registro di sistema>: \<: = aggiungi chiave> | \<Elimina chiave>

specifica che `registry expression` equivale a `Add Key` o `Delete Key`.

### <a name="syntax-example-3"></a>Esempio di sintassi 3

> \<Nome chiave>:: ='\<alfanumerico>+'

Specifica che `Key Name` è equivalente a uno o più `AlphaNumeric` valori.

### <a name="syntax-example-4"></a>Esempio di sintassi 4

> \<Aggiungi chiave>:: = [**ForceRemove** | **NoRemove** | **Val**]\<nome chiave>

specifica che `Add Key` equivale a `Key Name` e che i valori letterali stringa, `ForceRemove`, `NoRemove` e `val`, sono facoltativi.

### <a name="syntax-example-5"></a>Esempio di sintassi 5

> \<Alfanumerico>:: = *qualsiasi carattere non null, ovvero ASCII 0*

specifica che `AlphaNumeric` equivale a qualsiasi carattere non NULL.

### <a name="syntax-example-6"></a>Esempio di sintassi 6

```rgs
val 'testmulti' = m 'String 1\0String 2\0'
```

specifica che il nome della chiave `testmulti` è un valore multistringa costituito da `String 1` e `String 2`.

### <a name="syntax-example-7"></a>Esempio di sintassi 7

```rgs
val 'testhex' = d '&H55'
```

specifica che il nome della chiave `testhex` è un valore DWORD impostato su 55 esadecimale (85 decimale). Questo formato è conforme alla notazione **&H** riportata nella specifica di Visual Basic.

## <a name="see-also"></a>Vedere anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)
