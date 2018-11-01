---
title: PROTO
ms.date: 10/22/2018
f1_keywords:
- PROTO
helpviewer_keywords:
- PROTO directive
ms.assetid: 0487ee16-9dc7-43d1-9445-cd1601f5a080
ms.openlocfilehash: 616b6be2a5c191ebc67d61288cb5fa6c183091fa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536725"
---
# <a name="proto"></a>PROTO

Prototipi di una funzione o procedura. È possibile chiamare la funzione con prototipo di PROTO (direttiva) usando il [INVOKE](invoke.md) direttiva.

## <a name="syntax"></a>Sintassi

> *etichetta* **PROTO** \[ *distanza*] \[ *langtype*] \[ __,__ \[ *parametri*]__:__*tag*]...

### <a name="parameters"></a>Parametri

*label*<br/>
Il nome della funzione con prototipo.

*distance*<br/>
(Facoltativo) Utilizzate nei modelli di memoria a 16 bit per sostituire il valore predefinito e indicare **NEAR** oppure **ESTREMO** chiamate.

*langtype*<br/>
(Facoltativo) Imposta la convenzione di denominazione e chiamata di procedure e dei simboli pubblici. Convenzioni supportate sono:

- 32 bit **FLAT** modello: **C**, **STDCALL**

- i modelli di 16 bit: **C**, **BASIC**, **FORTRAN**, **PASCAL**, **SYSCALL**, **STDCALL**

*Parametro*<br/>
Nome facoltativo per un parametro di funzione.

*Tag*<br/>
Tipo di parametro di funzione.

Il *parametri* e *tag* parametri possono comparire più volte, una volta per ogni argomento passato.

## <a name="example"></a>Esempio

Questo esempio viene illustrato un **PROTO** dichiarazione per una funzione denominata `addup3` che usa una **NEAR** chiamata a sostituire il valore predefinito di 16 bit modello per le chiamate di procedura e si utilizza il **C**convenzione di chiamata per stack di parametri e valori restituiti. Accetta due argomenti, un **WORD** e una **VARARG**.

```MASM
addup3 PROTO NEAR C, argcount:WORD, arg1:VARARG
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](directives-reference.md)<br/>
[. Riferimento del modello](dot-model.md)<br/>
