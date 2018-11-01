---
title: Avviso degli strumenti del linker LNK4049
ms.date: 11/04/2016
f1_keywords:
- LNK4049
helpviewer_keywords:
- LNK4049
ms.assetid: 5fd5fb24-c860-4149-a557-0ac26a65d97c
ms.openlocfilehash: ed17a6014ddf420256848c87a90a37f190a0663e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429080"
---
# <a name="linker-tools-warning-lnk4049"></a>Avviso degli strumenti del linker LNK4049

simbolo 'symbol' importato definito localmente

Il simbolo è stato esportato da sia importato al programma.

Questo avviso viene generato dal linker quando si dichiara un simbolo con la `__declspec(dllexport)` classe di archiviazione nel file di un oggetto attributo e farvi riferimento usando la `__declspec(dllimport)` attributo in un altro.

Avviso LNK4049 è una versione più generale di [Warning di strumenti del Linker LNK4217](../../error-messages/tool-errors/linker-tools-warning-lnk4217.md). Il linker genera l'avviso LNK4049 quando non è possibile determinare da quale funzione viene fatto riferimento al simbolo importato.

I casi comuni in cui viene generato LNK4049 anziché LNK4217 sono:

- Collegamento incrementale utilizzando il [/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) opzione.

- Ottimizzazione intero programma tramite il [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) opzione.

Per risolvere LNK4049, provare una delle operazioni seguenti:

- Rimuovere il `__declspec(dllimport)` dichiarazione dalla dichiarazione con prototipo del simbolo che ha attivato LNK4049 del nome. È possibile cercare simboli all'interno di un'immagine binaria usando il **DUMPBIN** utilità. Il **DUMPBIN/simboli** consente di visualizzare la tabella di simboli COFF dell'immagine. Per altre informazioni sul **DUMPBIN** utilità, vedere [riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md).

- Disabilitare temporaneamente il collegamento incrementale e l'ottimizzazione dell'intero programma. Ricompilare l'applicazione genererà l'avviso LNK4217 che includerà il nome della funzione da cui viene fatto riferimento al simbolo importato. Rimuovere il `__declspec(dllimport)` dichiarazione dal simbolo importato e attivare il collegamento incrementale o Ottimizzazione intero programma in base alle esigenze.

Anche se il codice generato finale avrà un comportamento corretto, è meno efficiente della chiamata alla funzione direttamente il codice generato per chiamare la funzione importata. Questo avviso non viene visualizzato quando si esegue la compilazione con l'opzione [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

Per ulteriori informazioni sull'importazione e l'esportazione di dichiarazioni di dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="example"></a>Esempio

Collegare i due moduli seguenti genereranno LNK4049. Il primo modulo genera un file di oggetto che contiene una sola funzione esportata.

```
// LNK4049a.cpp
// compile with: /c

__declspec(dllexport) int func()
{
   return 3;
}
```

## <a name="example"></a>Esempio

Il secondo modulo genera un file di oggetto che contiene una dichiarazione con prototipo della funzione esportata nel primo modulo, insieme a una chiamata a questa funzione all'interno di `main` (funzione). Il collegamento di questo modulo con il primo modulo genererà LNK4049. Rimozione di `__declspec(dllimport)` dichiarazione risolverà il problema.

```
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

[Avviso degli strumenti del linker LNK4217](../../error-messages/tool-errors/linker-tools-warning-lnk4217.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)