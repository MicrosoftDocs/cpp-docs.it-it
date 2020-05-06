---
title: Importazione tramite i file DEF
ms.date: 11/04/2016
helpviewer_keywords:
- importing DLLs [C++], DEF files
- def files [C++], importing with
- .def files [C++], importing with
- dllimport attribute [C++], DEF files
- DLLs [C++], DEF files
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
ms.openlocfilehash: 13a6a375d6200f73dd9845d057d1954c2b65485c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273417"
---
# <a name="importing-using-def-files"></a>Importazione tramite i file DEF

Se si sceglie di utilizzare **__declspec (dllimport)** insieme a un file con estensione def, è necessario modificare il file def per utilizzare i dati al posto di Constant per ridurre la probabilità che la codifica errata provochi un problema:

```
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   DATA
```

Nella tabella seguente viene illustrato il motivo.

|Parola chiave|Emette nella libreria di importazione|Esporta|
|-------------|---------------------------------|-------------|
|`CONSTANT`|`_imp_ulDataInDll`, `_ulDataInDll`|`_ulDataInDll`|
|`DATA`|`_imp_ulDataInDll`|`_ulDataInDll`|

L'utilizzo di **__declspec (dllimport)** e della costante `imp` elenca sia la versione che il nome non decorato nella libreria di importazione dll. lib creata per consentire il collegamento esplicito. L'uso di **__declspec (dllimport)** e dei dati `imp` elenca solo la versione del nome.

Se si utilizza CONSTANT, è possibile utilizzare uno dei seguenti costrutti di codice per accedere `ulDataInDll`a:

```
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/
if (ulDataInDll == 0L)   /*sample code fragment*/
```

\-oppure-

```
ULONG *ulDataInDll;      /*prototype*/
if (*ulDataInDll == 0L)  /*sample code fragment*/
```

Tuttavia, se si usano i dati nel file def, solo il codice compilato con la definizione seguente può accedere alla variabile `ulDataInDll`:

```
__declspec(dllimport) ULONG ulDataInDll;

if (ulDataInDll == 0L)   /*sample code fragment*/
```

L'uso di CONSTANT è più rischioso perché se si dimentica di usare il livello di riferimento indiretto aggiuntivo, è possibile accedere potenzialmente al puntatore della tabella dell'indirizzo di importazione alla variabile, non alla variabile stessa. Questo tipo di problema spesso può manifestarsi come una violazione di accesso perché la tabella degli indirizzi di importazione è attualmente in sola lettura dal compilatore e dal linker.

Il linker MSVC corrente genera un avviso se rileva una costante nel file def per tenere conto di questo caso. L'unico motivo reale per usare CONSTANT è se non è possibile ricompilare il file oggetto in cui il file di intestazione non elenca **__declspec (dllimport)** nel prototipo.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
