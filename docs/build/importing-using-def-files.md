---
title: L'importazione tramite i file DEF | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- importing DLLs [C++], DEF files
- def files [C++], importing with
- .def files [C++], importing with
- dllimport attribute [C++], DEF files
- DLLs [C++], DEF files
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e1562e14b20e4e1dd96764414978889d6205179
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710541"
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
