---
description: 'Altre informazioni su: procedura: impostare le proprietà di analisi del codice per i progetti C/C++'
title: 'Procedura: impostare le proprietà di analisi del codice per progetti C/C++'
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.propertypages.native
- VC.Project.VCCLCompilerTool.EnablePrefast
- VC.Project.VCFxCopTool.EnablePREfast
- VC.Project.VCFxCopTool.IgnoreGeneratedCode
helpviewer_keywords:
- properties, C/C++ Code Analysis
- properties, Code Analysis
- code analysis properties
- C/C++ code analysis properties
ms.assetid: 7af52097-6d44-4785-9b9f-43b7a7d447d7
ms.openlocfilehash: 590254406242c369da9aff91d006313ed797078f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151567"
---
# <a name="how-to-set-code-analysis-properties-for-cc-projects"></a>Procedura: impostare le proprietà di analisi del codice per progetti C/C++

È possibile configurare le regole utilizzate dallo strumento di analisi del codice per analizzare il codice in ogni configurazione del progetto. Inoltre, è possibile indirizzare l'analisi del codice in modo da non visualizzare gli avvisi dal codice generato e aggiunto al progetto da uno strumento di terze parti.

## <a name="code-analysis-property-page"></a>Pagina delle proprietà dell'analisi del codice

Nella pagina delle proprietà **analisi codice** sono contenute tutte le impostazioni di configurazione dell'analisi del codice per un progetto MSBuild. Per aprire la pagina delle proprietà analisi codice per un progetto in **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Proprietà**. Successivamente, espandere **proprietà di configurazione** e selezionare la scheda **analisi codice** .

## <a name="project-configuration-and-platform"></a>Configurazione e piattaforma del progetto

L'elenco di **configurazione** e l'elenco di **piattaforme** nella parte superiore della finestra consentono di applicare diverse impostazioni di analisi del codice a diverse combinazioni di configurazioni di progetto e piattaforme. Ad esempio, è possibile indirizzare l'analisi del codice per applicare un set di regole al progetto per le compilazioni di debug e un set diverso per le build di rilascio.

## <a name="enabling-code-analysis"></a>Abilitazione dell'analisi codice

È possibile abilitare l'analisi del codice per il progetto attivando le opzioni **Abilita analisi codice Microsoft** e **Abilita Clang-tidy** e configurare ulteriormente se viene eseguito in compilazione selezionando **Abilita analisi codice durante la compilazione**. In combinazione con l'elenco di **configurazione** , è possibile, ad esempio, decidere di disabilitare l'analisi del codice per le compilazioni di debug e abilitarla per le build di rilascio.

L'analisi del codice è progettata per contribuire a migliorare la qualità del codice ed evitare problemi comuni. Pertanto, valutare attentamente se disabilitare l'analisi del codice. È in genere preferibile disabilitare i set di regole, le singole regole o i singoli controlli che non si desidera applicare al progetto.

## <a name="cmake-configuration"></a>Configurazione di CMake

Nei progetti CMake modificare il valore delle `enableMicrosoftCodeAnalysis` chiavi e in `enableClangTidyCodeAnalysis` `CMakeSettings.json` per abilitare o disabilitare l'analisi del codice. Per ulteriori informazioni, vedere [utilizzo di Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) .

## <a name="see-also"></a>Vedi anche

- [Analisi della qualità del codice gestito](/visualstudio/code-quality/code-analysis-for-managed-code-overview)
- [Avvisi di analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-warnings.md)
- [Usare set di regole per specificare le regole C++ da eseguire](using-rule-sets-to-specify-the-cpp-rules-to-run.md)
- [Uso di Clang-tidy](../code-quality/clang-tidy.md)
