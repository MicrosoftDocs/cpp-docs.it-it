---
title: Classi di archiviazione C
ms.date: 08/31/2018
helpviewer_keywords:
- static variables, lifetime
- storage classes
- lifetime, variables
- specifiers, storage class
- storage class specifiers, C storage classes
- storage duration
ms.assetid: 893fb929-f7a9-43dc-a0b3-29cb1ef845c1
ms.openlocfilehash: 4f793e8485628faf0a80445ce0414835e3b71d1f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217168"
---
# <a name="c-storage-classes"></a>Classi di archiviazione C

La "classe di archiviazione" della variabile determina se l'elemento dispone di una durata "globale" o "locale". C chiama queste due durate "statica" e "automatica". Un elemento con una durata globale esiste già e mantiene lo stesso valore nel corso dell'esecuzione del programma. Tutte le funzioni hanno durate globali.

Alle variabili automatiche o alle variabili con durate locali viene allocato un nuovo spazio di archiviazione ogni volta in cui il controllo dell'esecuzione passa nel blocco nel quale vengono definite. Al termine dell'esecuzione, le variabili non hanno più valori significativi.

C fornisce i seguenti identificatori della classe di archiviazione:

## <a name="syntax"></a>Sintassi

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`auto`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`register`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`static`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`extern`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`typedef`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__declspec (`***Extended-decl-Modifier-Seq* **`)`**  / \* Specifiche di Microsoft\*/

Ad eccezione di **`__declspec`** , è possibile usare un solo *Storage-Class-specifier* in *Declaration-specifier* in una dichiarazione. Se non viene creata alcuna specifica della classe di archiviazione, le dichiarazioni all'interno di un blocco creano oggetti automatici.

Gli elementi dichiarati con l' **`auto`** **`register`** identificatore o hanno durate locali. Gli elementi dichiarati con l' **`static`** **`extern`** identificatore o hanno durate globali.

Poiché **`typedef`** e **`__declspec`** sono semanticamente diversi dagli altri quattro terminali *Storage-Class-specifier* , vengono descritti separatamente. Per informazioni specifiche su **`typedef`** , vedere [ `typedef` dichiarazioni](../c-language/typedef-declarations.md). Per informazioni specifiche su **`__declspec`** , vedere [attributi estesi della classe di archiviazione](../c-language/c-extended-storage-class-attributes.md).

La posizione delle dichiarazioni di funzione e di variabile nei file di origine influisce anche sulla classe di archiviazione e sulla visibilità. Le dichiarazioni all'esterno di tutte le definizioni di funzione vengono visualizzate a livello "esterno". Le dichiarazioni all'interno delle definizioni di funzione vengono visualizzate a "livello interno".

Il significato esatto di ogni identificatore della classe di archiviazione dipende da due fattori:

- Se la dichiarazione viene visualizzata a livello interno o esterno

- Se l'elemento dichiarato è una variabile o una funzione

Gli argomenti [Identificatori di classi di archiviazione per dichiarazioni di livello esterno](../c-language/storage-class-specifiers-for-external-level-declarations.md) e [Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md) descrivono i terminali *storage-class-specifier* in ogni tipo di dichiarazione e illustrano il comportamento predefinito quando *storage-class-specifier* viene omesso da una variabile. In [Identificatori di classi di archiviazione con dichiarazioni di funzione](../c-language/storage-class-specifiers-with-function-declarations.md) vengono descritti gli identificatori della classe di archiviazione usati con le funzioni.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
