---
title: Avviso degli strumenti del linker LNK4049
ms.date: 04/15/2019
f1_keywords:
- LNK4049
helpviewer_keywords:
- LNK4049
ms.assetid: 5fd5fb24-c860-4149-a557-0ac26a65d97c
ms.openlocfilehash: a8e4416eafd47f584de4ab1c83aa7303cab0440a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194135"
---
# <a name="linker-tools-warning-lnk4049"></a>Avviso degli strumenti del linker LNK4049

> il simbolo '*Symbol*' definito in '*filename. obj*' è importato

per il *simbolo* è stato specificato [__declspec (dllimport)](../../cpp/dllexport-dllimport.md) anche se il simbolo è definito nel file oggetto *filename. obj* nella stessa immagine. Rimuovere il modificatore `__declspec(dllimport)` per risolvere questo avviso.

## <a name="remarks"></a>Osservazioni

Questo avviso viene generato dal linker quando si definisce un simbolo in un file oggetto e vi si fa riferimento usando il modificatore `__declspec(dllimport)` dichiarazione in un altro.

Avviso LNK4049 è una versione più generale dell' [avviso LNK4217 degli strumenti del linker](linker-tools-warning-lnk4217.md). Il linker genera un avviso LNK4049 quando non è in grado di determinare la funzione o il file oggetto a cui fa riferimento il simbolo importato.

I casi comuni in cui viene generato LNK4049 anziché LNK4217 sono:

- Quando si usa l'opzione [/Incremental](../../build/reference/incremental-link-incrementally.md) .

- Quando si usa l'opzione [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) .

Per risolvere LNK4049, provare una delle procedure seguenti:

- Rimuovere il modificatore `__declspec(dllimport)` dalla dichiarazione con il simbolo che ha attivato LNK4049. È possibile cercare i simboli all'interno di un'immagine binaria utilizzando l'utilità **dumpbin** . L'opzione **dumpbin/symbols** Visualizza la tabella dei simboli COFF dell'immagine. Per ulteriori informazioni sull'utilità **dumpbin** , vedere [riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md).

- Disabilitare temporaneamente il collegamento incrementale e l'ottimizzazione dell'intero programma. Quando viene ricompilato, l'applicazione genera l'avviso LNK4217, che include il nome della funzione che fa riferimento al simbolo importato. Rimuovere il modificatore di dichiarazione `__declspec(dllimport)` dal simbolo importato e riabilitare il collegamento incrementale o l'ottimizzazione dell'intero programma in base alle esigenze.

Anche se il codice generato finale funziona correttamente, il codice generato per chiamare la funzione importata è meno efficiente rispetto alla chiamata diretta della funzione. Questo avviso non viene visualizzato quando si esegue la compilazione con l'opzione [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) .

Per ulteriori informazioni sulle dichiarazioni di importazione ed esportazione dei dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="example"></a>Esempio

Il collegamento dei due moduli seguenti genererà LNK4049. Il primo modulo genera un file oggetto contenente una singola funzione esportata.

```cpp
// LNK4049a.cpp
// compile with: /c

__declspec(dllexport) int func()
{
   return 3;
}
```

Il secondo modulo genera un file oggetto contenente una dichiarazione in avanti per la funzione esportata nel primo modulo, insieme a una chiamata a questa funzione all'interno della funzione `main`. Il collegamento di questo modulo con il primo modulo genererà LNK4049. Rimuovere il modificatore `__declspec(dllimport)` dalla dichiarazione per risolvere l'avviso.

```cpp
// LNK4049b.cpp
// compile with: /link /WX /LTCG LNK4049a.obj
// LNK4049 expected

__declspec(dllimport) int func();
// try the following line instead
// int func();

int main()
{
   return func();
}
```

## <a name="see-also"></a>Vedere anche

[Avviso degli strumenti del linker LNK4217](linker-tools-warning-lnk4217.md) \
[Avviso degli strumenti del linker LNK4286](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)
