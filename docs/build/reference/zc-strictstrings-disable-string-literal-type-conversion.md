---
title: '/Zc: strictstrings (disabilitare la conversione del tipo di valore letterale stringa) | Microsoft Docs'
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:strictStrings
- strictStrings
dev_langs:
- C++
helpviewer_keywords:
- /Zc:strictStrings
- -Zc compiler options (C++)
- strictStrings
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: b7eb3f3b-82c1-48a2-8e63-66bad7397b46
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5055d7d1e7804512fa8f1a72bbdb27c483d6fdd3
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42581139"
---
# <a name="zcstrictstrings-disable-string-literal-type-conversion"></a>/Zc:strictStrings (Disabilitare la conversione del tipo di valore letterale stringa)

Quando specificato, il compilatore richiede la stretta conformità con la qualificazione `const` per i puntatori inizializzati mediante valori letterali di stringa.

## <a name="syntax"></a>Sintassi

> **/Zc:strictStrings**[**-**]

## <a name="remarks"></a>Note

Se **/Zc: strictstrings** è specificato, il compilatore impone standard C++ `const` qualificazioni per i valori letterali stringa, come tipo ' matrice di `const char`' o ' matrice di `const wchar_t`', a seconda della dichiarazione. I valori letterali di stringa non sono modificabili e un tentativo di modificare il contenuto di uno di questi valori provoca un errore di violazione di accesso in fase di esecuzione. È necessario dichiarare un puntatore di stringa come `const` per inizializzarlo mediante un valore letterale di stringa o usare un oggetto `const_cast` per inizializzare un puntatore non `const`. Per impostazione predefinita, oppure se **/Zc:strictStrings-** è specificato, il compilatore non impone standard C++ `const` criteri per i puntatori di stringa inizializzati mediante valori letterali stringa.

Il **/Zc: strictstrings** opzione è disattivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) l'opzione del compilatore in modo implicito imposta questa opzione, ma può essere sottoposto a override utilizzando **/Zc:strictStrings-**.

Usare la **/Zc: strictstrings** opzione per evitare la compilazione di codice non corretto. Questo esempio mostra in che modo un semplice errore di dichiarazione provoca un arresto anomalo in fase di esecuzione:

```cpp
// strictStrings_off.cpp
// compile by using: cl /W4 strictStrings_off.cpp
int main() {
   wchar_t* str = L"hello";
   str[2] = L'a'; // run-time error: access violation
}
```

Quando **/Zc: strictstrings** è abilitata, lo stesso codice segnala un errore nella dichiarazione di `str`.

```cpp
// strictStrings_on.cpp
// compile by using: cl /Zc:strictStrings /W4 strictStrings_on.cpp
int main() {
   wchar_t* str = L"hello"; // error: Conversion from string literal
   // loses const qualifier
   str[2] = L'a';
}
```

Se si usa `auto` per dichiarare un puntatore di stringa, il compilatore crea automaticamente la dichiarazione del tipo di puntatore `const` corretta. Il tentativo di modificare il contenuto di un puntatore `const` viene segnalato dal compilatore come errore.

> [!NOTE]
> La libreria Standard C++ in Visual Studio 2013 non supporta il **/Zc: strictstrings** si basa l'opzione del compilatore in modalità debug. Se viene visualizzato alcuni [C2665](../../error-messages/compiler-errors-2/compiler-error-c2665.md) errori nella compilazione di output, questo potrebbe essere la causa.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: strictstrings** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
