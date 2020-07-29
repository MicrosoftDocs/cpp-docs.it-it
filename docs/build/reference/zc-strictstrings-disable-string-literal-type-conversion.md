---
title: /Zc:strictStrings (Disabilitare la conversione del tipo di valore letterale stringa)
ms.date: 03/06/2018
f1_keywords:
- /Zc:strictStrings
- strictStrings
helpviewer_keywords:
- /Zc:strictStrings
- -Zc compiler options (C++)
- strictStrings
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: b7eb3f3b-82c1-48a2-8e63-66bad7397b46
ms.openlocfilehash: df880ed64fa472ff55eb5ee0d17caacf56228ab6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211892"
---
# <a name="zcstrictstrings-disable-string-literal-type-conversion"></a>`/Zc:strictStrings`(Disabilita conversione del tipo di valore letterale stringa)

Quando specificato, il compilatore richiede una **`const`** conformità di qualificazione rigorosa per i puntatori inizializzati usando valori letterali stringa.

## <a name="syntax"></a>Sintassi

> **`/Zc:strictStrings`**[**`-`**]

## <a name="remarks"></a>Osservazioni

Se **`/Zc:strictStrings`** si specifica, il compilatore applica le qualifiche C++ standard **`const`** per i valori letterali stringa, come tipo ' Array of `const char` ' o ' Array of `const wchar_t` ', a seconda della dichiarazione. I valori letterali di stringa non sono modificabili e un tentativo di modificare il contenuto di uno di questi valori provoca un errore di violazione di accesso in fase di esecuzione. È necessario dichiarare un puntatore di stringa come **`const`** per inizializzarlo utilizzando un valore letterale stringa oppure utilizzare un oggetto esplicito **`const_cast`** per inizializzare un non **`const`** puntatore. Per impostazione predefinita, o se **`/Zc:strictStrings-`** viene specificato, il compilatore non impone le **`const`** qualificazioni standard C++ per i puntatori di stringa inizializzati mediante valori letterali stringa.

**`/Zc:strictStrings`** Per impostazione predefinita, l'opzione è disattivata. L' [`/permissive-`](permissive-standards-conformance.md) opzione del compilatore imposta in modo implicito questa opzione, ma è possibile eseguirne l'override usando **`/Zc:strictStrings-`** .

Utilizzare l' **`/Zc:strictStrings`** opzione per impedire la compilazione di codice errato. Questo esempio mostra in che modo un semplice errore di dichiarazione provoca un arresto anomalo in fase di esecuzione:

```cpp
// strictStrings_off.cpp
// compile by using: cl /W4 strictStrings_off.cpp
int main() {
   wchar_t* str = L"hello";
   str[2] = L'a'; // run-time error: access violation
}
```

Quando **`/Zc:strictStrings`** è abilitato, lo stesso codice segnala un errore nella dichiarazione di `str` .

```cpp
// strictStrings_on.cpp
// compile by using: cl /Zc:strictStrings /W4 strictStrings_on.cpp
int main() {
   wchar_t* str = L"hello"; // error: Conversion from string literal
   // loses const qualifier
   str[2] = L'a';
}
```

Se si usa **`auto`** per dichiarare un puntatore di stringa, il compilatore crea automaticamente la **`const`** dichiarazione del tipo di puntatore corretta. Il tentativo di modificare il contenuto di un **`const`** puntatore viene segnalato dal compilatore come errore.

> [!NOTE]
> La libreria standard C++ in Visual Studio 2013 non supporta l' **`/Zc:strictStrings`** opzione del compilatore nelle compilazioni di debug. Se nell'output di compilazione vengono visualizzati diversi errori di [C2665](../../error-messages/compiler-errors-2/compiler-error-c2665.md) , è possibile che si verifichi questa operazione.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **`/Zc:strictStrings`** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[`/Zc`Conformità](zc-conformance.md)<br/>
