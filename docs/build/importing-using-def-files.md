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
ms.openlocfilehash: e4ac48dc013874c240411f78a733d32e116df25d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223967"
---
# <a name="importing-using-def-files"></a>Importazione tramite i file DEF

Se si sceglie di usare **`__declspec(dllimport)`** insieme a un file con estensione def, è necessario modificare il file con estensione def per usare i dati al posto di Constant per ridurre la probabilità che la codifica errata provochi un problema:

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

Con la **`__declspec(dllimport)`** costante and vengono elencati sia la `imp` versione che il nome non decorato nella libreria di importazione dll. lib creata per consentire il collegamento esplicito. Utilizzando i **`__declspec(dllimport)`** dati e viene elencata solo la `imp` versione del nome.

Se si utilizza CONSTANT, è possibile utilizzare uno dei seguenti costrutti di codice per accedere a `ulDataInDll` :

```
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/
if (ulDataInDll == 0L)   /*sample code fragment*/
```

\-oppure-

```
ULONG *ulDataInDll;      /*prototype*/
if (*ulDataInDll == 0L)  /*sample code fragment*/
```

Tuttavia, se si usano i dati nel file def, solo il codice compilato con la definizione seguente può accedere alla variabile `ulDataInDll` :

```
__declspec(dllimport) ULONG ulDataInDll;

if (ulDataInDll == 0L)   /*sample code fragment*/
```

L'uso di CONSTANT è più rischioso perché se si dimentica di usare il livello di riferimento indiretto aggiuntivo, è possibile accedere potenzialmente al puntatore della tabella dell'indirizzo di importazione alla variabile, non alla variabile stessa. Questo tipo di problema spesso può manifestarsi come una violazione di accesso perché la tabella degli indirizzi di importazione è attualmente in sola lettura dal compilatore e dal linker.

Il linker MSVC corrente genera un avviso se rileva una costante nel file def per tenere conto di questo caso. L'unico motivo reale per usare CONSTANT è se non è possibile ricompilare il file oggetto in cui il file di intestazione non è stato elencato nel **`__declspec(dllimport)`** prototipo.

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
