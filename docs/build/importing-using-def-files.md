---
description: 'Altre informazioni su: importazione tramite i file DEF'
title: Importazione tramite i file DEF
ms.date: 11/04/2016
helpviewer_keywords:
- importing DLLs [C++], DEF files
- def files [C++], importing with
- .def files [C++], importing with
- dllimport attribute [C++], DEF files
- DLLs [C++], DEF files
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
ms.openlocfilehash: 9eb4face47bf999daa8f969282cc621708a76006
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156151"
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

|Parola chiave|Emette nella libreria di importazione|Esportazioni|
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

## <a name="see-also"></a>Vedi anche

[Importazione in un'applicazione](importing-into-an-application.md)
