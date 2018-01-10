---
title: -constexpr (valutazione di constexpr di controllo) | Documenti Microsoft
ms.custom: 
ms.date: 08/15/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /constexpr
- -constexpr
dev_langs: C++
helpviewer_keywords:
- /constexpr control constexpr evaluation [C++]
- -constexpr control constexpr evaluation [C++]
- constexpr control constexpr evaluation [C++]
ms.assetid: 76d56784-f5ad-401d-841d-09d1059e8b8c
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7e594eb697c8972d28b513a3638d3eb704258b5e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constexpr-control-constexpr-evaluation"></a>/constexpr (valutazione di constexpr di controllo)  
  
Utilizzare il **/constexpr** opzioni del compilatore per controllare i parametri per `constexpr` valutazione in fase di compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
> /constexpr:Depth*N*  
> /constexpr:BackTrace*N*  
> /constexpr*N*  
  
## <a name="arguments"></a>Argomenti  
  
**profondità***N*  
Limitare la profondità della ricorsiva `constexpr` della chiamata di funzione *N* livelli. Il valore predefinito è 512.  
  
**BackTrace***N*  
Mostra fino a *N* `constexpr` valutazioni di diagnostica. Il valore predefinito è 10.  
  
**passaggi***N*  
Terminare `constexpr` valutazione dopo *N* passaggi. Il valore predefinito è 100.000.  
  
## <a name="remarks"></a>Note  
  
Il **/constexpr** opzioni del compilatore controllano in fase di compilazione di valutazione di `constexpr` espressioni. Passaggi di valutazione, i livelli di ricorsione e profondità backtrace vengono controllati per impedire al compilatore di spesa troppo tempo per `constexpr` valutazione. Per ulteriori informazioni sul `constexpr` elemento di linguaggio, vedere [constexpr (C++)](../../cpp/constexpr-cpp.md).  

Il **/constexpr** opzioni sono disponibili a partire da Visual Studio 2015.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1. Aprire il progetto **pagine delle proprietà** la finestra di dialogo.   
  
2. In **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.  
  
3. Immettere eventuali **/constexpr** opzioni del compilatore di **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per salvare le modifiche.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
  
[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)