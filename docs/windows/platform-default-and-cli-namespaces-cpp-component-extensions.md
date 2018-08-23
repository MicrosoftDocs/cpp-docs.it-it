---
title: Platform, default e cli (estensioni del componente C++) gli spazi dei nomi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- lang
- cli
dev_langs:
- C++
helpviewer_keywords:
- lang namespace
- cli namespace
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cde444e807aa6fe2276b4bfe9b0b9c4bc0476103
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610554"
---
# <a name="platform-default-and-cli-namespaces--c-component-extensions"></a>Spazi dei nomi Platform, default e cli (Estensioni del componente C++)

Uno spazio dei nomi qualifica i nomi di un elemento del linguaggio in modo che i nomi non siano in conflitto con nomi identici nel codice sorgente. Ad esempio, un conflitto di nomi può impedire al compilatore riconoscere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md). Gli spazi dei nomi vengono utilizzati dal compilatore, ma non vengono mantenuti nell'assembly compilato.

## <a name="all-runtimes"></a>Tutti i runtime

Quando si creare un progetto, in Visual C++ è disponibile uno spazio dei nomi predefinito per il progetto stesso. È possibile rinominare manualmente lo spazio dei nomi, anche se in Windows Runtime il nome del file con estensione winmd deve corrispondere al nome dello spazio dei nomi radice.

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [spazi dei nomi e visibilità del tipo (C + c++ /CX)](http://msdn.microsoft.com/library/windows/apps/hh969551.aspx).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```cpp
using namespace cli;
```

### <a name="remarks"></a>Note

C + + / CLI supporta il **cli** dello spazio dei nomi. Durante la compilazione con `/clr`, il **usando** istruzione nella sezione relativa alla sintassi è implicita.

Le seguenti funzionalità del linguaggio sono nel **cli** dello spazio dei nomi:

- [Array](../windows/arrays-cpp-component-extensions.md)

- [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)

- [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)

- [safe_cast](../windows/safe-cast-cpp-component-extensions.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente viene illustrato che è possibile utilizzare un simbolo nel **cli** dello spazio dei nomi come simbolo definito dall'utente nel codice.  Tuttavia, dopo avere eseguito questa operazione, sarà necessario qualificare in modo esplicito o implicito i riferimenti al **cli** elemento di linguaggio lo stesso nome.

```cpp
// cli_namespace.cpp
// compile with: /clr
using namespace cli;
int main() {
   array<int> ^ MyArray = gcnew array<int>(100);
   int array = 0;

   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062

   // OK
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);
}
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)