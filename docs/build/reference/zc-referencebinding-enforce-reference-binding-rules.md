---
title: /Zc:referenceBinding (applicare le regole di associazione riferimento) | Documenti Microsoft
ms.custom: 
ms.date: 12/13/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- referenceBinding
- /Zc:referenceBinding
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- referenceBinding
- Enforce reference binding rules
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 0c6cfaac-9c2a-41a3-aa94-64ca8ef261fc
caps.latest.revision: "1"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0d3d352394b61f95e083a2e6e6f0d888fe210b37
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcreferencebinding-enforce-reference-binding-rules"></a>/Zc:referenceBinding (applicare le regole di associazione riferimento)
Quando il **/Zc:referenceBinding** è specificata l'opzione, il compilatore non consente un riferimento lvalue non const associare a una variabile temporanea.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:referenceBinding[-]  
```  
  
## <a name="remarks"></a>Note  
Se **/Zc:referenceBinding** è specificato, il compilatore seguirà la sezione al punto 8.5.3 di C++ 11 standard e non consente le espressioni che associano un tipo definito dall'utente temporaneo a un riferimento lvalue non const. Per impostazione predefinita, oppure se **/Zc:referenceBinding-** è specificata, il compilatore consente di tali espressioni come un'estensione Microsoft, ma viene generato un avviso di livello 4. Per la sicurezza di codice, la portabilità e la conformità, è consigliabile utilizzare **/Zc:referenceBinding**. Il [/ permissiva-](permissive-standards-conformance.md) l'opzione del compilatore in modo implicito imposta questa opzione, ma può essere sottoposto a override utilizzando **/Zc:referenceBinding-**.  
  
## <a name="example"></a>Esempio  
  
Questo esempio mostra l'estensione Microsoft che consente una password temporanea di un tipo definito dall'utente sia associato a un riferimento lvalue non const.
```cpp  
// zcreferencebinding.cpp
struct S {
};

void f(S&) {
}

S g() {
    return S{};
}

void main() {
    S& s = g();         // warning C4239 at /W4
    const S& cs = g();  // okay, bound to const ref
    f(g());             // Extension: error C2664 only if /Zc:referenceBinding
}
```  
  
Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:referenceBinding** e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
[/Zc (conformità)](../../build/reference/zc-conformance.md)