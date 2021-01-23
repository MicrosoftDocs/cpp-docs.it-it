---
description: Altre informazioni sulla direttiva hdrstop pragma in Microsoft C/C++
title: hdrstop pragma
ms.date: 01/22/2021
f1_keywords:
- hdrstop_CPP
- vc-pragma.hdrstop
helpviewer_keywords:
- hdrstop pragma
- pragma, hdrstop
no-loc:
- pragma
ms.openlocfilehash: caeaeb4a44182b6ba2edfa385a1504fde998cc43
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713610"
---
# <a name="hdrstop-no-locpragma"></a>`hdrstop` pragma

Offre un maggiore controllo sui nomi dei file di precompilazione e sulla posizione in cui viene salvato lo stato di compilazione.

## <a name="syntax"></a>Sintassi

> **`#pragma hdrstop`** [("*nomefile*")]

## <a name="remarks"></a>Osservazioni

*Filename* è il nome del file di intestazione precompilato da usare o creare (a seconda che sia o meno [`/Yu`](../build/reference/yu-use-precompiled-header-file.md) [`/Yc`](../build/reference/yc-create-precompiled-header-file.md) specificato). Se *filename* non contiene una specifica del percorso, si presuppone che il file di intestazione precompilato si trovi nella stessa directory del file di origine.

Se un file C o C++ contiene un oggetto **`hdrstop`** pragma quando viene compilato con **`/Yc`** , il compilatore salva lo stato della compilazione fino al percorso di pragma . Lo stato compilato di qualsiasi codice che segue pragma non viene salvato.

Utilizzare *filename* per denominare il file di intestazione precompilato in cui viene salvato lo stato compilato. Uno spazio tra **`hdrstop`** e *filename* è facoltativo. Il nome file specificato in **`hdrstop`** pragma è una stringa ed è soggetto ai vincoli di qualsiasi stringa C o C++. In particolare, è necessario racchiuderlo tra virgolette e utilizzare il carattere di escape (barra rovesciata, **`\`** ) per specificare i nomi delle directory. Ad esempio:

```C
#pragma hdrstop( "c:\\projects\\include\\myinc.pch" )
```

Il nome del file di intestazione precompilata viene determinato in base agli elementi seguenti (in ordine di priorità):

1. Argomento dell'opzione del **`/Fp`** compilatore

2. Argomento *filename* per `#pragma hdrstop`

3. Nome di base del file di origine con estensione PCH

Se nessuna delle **`/Yc`** Opzioni e **`/Yu`** o **`hdrstop`** pragma specifica un nome di file, il nome di base del file di origine viene usato come nome di base del file di intestazione precompilato.

È inoltre possibile utilizzare i comandi di pre-elaborazione per eseguire la sostituzione delle macro come indicato di seguito:

```C
#define INCLUDE_PATH "c:\\progra~`1\\devstsu~1\\vc\\include\\"
#define PCH_FNAME "PROG.PCH"
.
.
.
#pragma hdrstop( INCLUDE_PATH PCH_FNAME )
```

Le regole seguenti determinano dove **`hdrstop`** pragma è possibile collocare l'oggetto:

- Deve trovarsi all'esterno di eventuali dati o dichiarazione o definizione di funzione.

- Deve essere specificato nel file di origine, non all'interno di un file di intestazione.

## <a name="example"></a>Esempio

```C
#include <windows.h>                 // Include several files
#include "myhdr.h"

__inline Disp( char *szToDisplay )   // Define an inline function
{
    // ...                           // Some code to display string
}
#pragma hdrstop
```

In questo esempio, l'oggetto **`hdrstop`** pragma viene visualizzato dopo che sono stati inclusi due file ed è stata definita una funzione inline. Questo percorso può sembrare inizialmente un posizionamento dispari per pragma . Si consideri, tuttavia, che utilizzando le opzioni di precompilazione manuali, **`/Yc`** e **`/Yu`** , con **`hdrstop`** pragma consente di precompilare interi file di origine o persino di codice inline. Il compilatore Microsoft non limita la precompilazione solo delle dichiarazioni di dati.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
