---
title: Avviso degli strumenti del linker LNK4049
ms.date: 04/09/2019
f1_keywords:
- LNK4049
helpviewer_keywords:
- LNK4049
ms.assetid: 5fd5fb24-c860-4149-a557-0ac26a65d97c
ms.openlocfilehash: 357bf5a981dddadfd79d2d6981ccc9c478909097
ms.sourcegitcommit: 0ad3f4517e64900a2702dd3d366586f9e2bce2c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2019
ms.locfileid: "59477353"
---
# <a name="linker-tools-warning-lnk4049"></a>Avviso degli strumenti del linker LNK4049

> simbolo '*simbolo*'definito '*filename. obj*' è importato

Il simbolo è stato esportato da sia importato al programma.

Questo avviso viene generato dal linker quando si definisce un simbolo nel file di un oggetto e farvi riferimento usando la `__declspec(dllimport)` modificatore di dichiarazione in un altro.

Avviso LNK4049 è una versione più generale di [Warning di strumenti del Linker LNK4217](linker-tools-warning-lnk4217.md). Il linker genera avviso LNK4049 quando non è possibile determinare quali file oggetto o funzione cui si fa riferimento al simbolo importato.

I casi comuni in cui viene generato LNK4049 anziché LNK4217 sono:

- Quando si usa la [/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) opzione.

- Quando si usa la [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) opzione.

Per risolvere LNK4049, provare una delle procedure riportate di seguito:

- Rimuovere il `__declspec(dllimport)` modificatore dalla dichiarazione con prototipo del simbolo di cui è stato attivato LNK4049. È possibile cercare simboli all'interno di un'immagine binaria usando il **DUMPBIN** utilità. Il **DUMPBIN /SYMBOLS** consente di visualizzare la tabella di simboli COFF dell'immagine. Per altre informazioni sul **DUMPBIN** utilità, vedere [riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md).

- Disabilitare temporaneamente il collegamento incrementale e l'ottimizzazione dell'intero programma. Quando ricompilata, l'applicazione genera avviso LNK4217, che include il nome della funzione che fa riferimento al simbolo importato. Rimuovere il `__declspec(dllimport)` modificatore di dichiarazione dal simbolo importato e abilitare di nuovo il collegamento incrementale o Ottimizzazione intero programma in base alle esigenze.

Anche se il codice generato finale si comporta correttamente, è meno efficiente della chiamata alla funzione direttamente il codice generato per chiamare la funzione importata. Questo avviso non viene visualizzato quando esegue la compilazione usando il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione.

Per ulteriori informazioni sull'importazione e l'esportazione di dichiarazioni di dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="example"></a>Esempio

Collegare i due moduli seguenti genereranno LNK4049. Il primo modulo genera un file di oggetto che contiene una sola funzione esportata.

```cpp
// LNK4049a.cpp
// compile with: /c

__declspec(dllexport) int func()
{
   return 3;
}
```

Il secondo modulo genera un file di oggetto che contiene una dichiarazione con prototipo della funzione esportata nel primo modulo, insieme a una chiamata a questa funzione all'interno di `main` (funzione). Il collegamento di questo modulo con il primo modulo genererà LNK4049. Rimuovere il `__declspec(dllimport)` modificatore dalla dichiarazione di risolvere l'avviso.

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

[Strumenti del linker LNK4217 di avviso](linker-tools-warning-lnk4217.md) \
[Avviso LNK4286 degli strumenti del linker](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)