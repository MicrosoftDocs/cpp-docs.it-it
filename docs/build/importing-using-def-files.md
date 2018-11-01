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
ms.openlocfilehash: d393ce8b27a0f04527b912db5936534ebd9b2d5c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434373"
---
# <a name="importing-using-def-files"></a>Importazione tramite i file DEF

Se si sceglie di usare **declspec** insieme a un file. def, è necessario modificare il file con estensione def per usare i dati al posto di costante per ridurre la probabilità che la scrittura di codice non corretto causa un problema:

```
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   DATA
```

La tabella seguente illustra il motivo.

|Parola chiave|Genera nella libreria di importazione|Esportazioni|
|-------------|---------------------------------|-------------|
|`CONSTANT`|`_imp_ulDataInDll`, `_ulDataInDll`|`_ulDataInDll`|
|`DATA`|`_imp_ulDataInDll`|`_ulDataInDll`|

Usando **declspec** e costante vengono elencate entrambe le `imp` versione e il nome non decorato in lib DLL importazione della libreria che viene creata per consentire il collegamento esplicito. Usando **declspec** e gli elenchi di dati solo la `imp` versione del nome.

Se si usa una costante, uno dei costrutti di codice seguente può essere utilizzato per accedere a `ulDataInDll`:

```
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/
if (ulDataInDll == 0L)   /*sample code fragment*/
```

\-o -

```
ULONG *ulDataInDll;      /*prototype*/
if (*ulDataInDll == 0L)  /*sample code fragment*/
```

Tuttavia, se si utilizzano dati nel file def, solo il codice compilato con la seguente definizione può accedere alla variabile `ulDataInDll`:

```
__declspec(dllimport) ULONG ulDataInDll;

if (ulDataInDll == 0L)   /*sample code fragment*/
```

L'utilizzo di costante è più rischioso perché se si dimentica di utilizzare un livello supplementare di riferimento indiretto, si potrebbe accedere puntatore della tabella IAT a variabile, ovvero non la variabile stessa. Questo tipo di problema può risolversi spesso una violazione di accesso perché la tabella IAT è attualmente impostata in sola lettura dal compilatore e linker.

Il linker corrente di Visual C++ genera un avviso se rileva costante nel file def per tenere conto per questo case. L'unico vero motivo per utilizzare costante è se non è possibile ricompilare alcuni file oggetto in cui il file di intestazione non elenca **declspec** nel prototipo.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](../build/importing-into-an-application.md)
