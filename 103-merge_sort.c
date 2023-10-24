{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"0-O","path":"0-O","contentType":"file"},{"name":"0-bubble_sort.c","path":"0-bubble_sort.c","contentType":"file"},{"name":"1-O","path":"1-O","contentType":"file"},{"name":"1-insertion_sort_list.c","path":"1-insertion_sort_list.c","contentType":"file"},{"name":"100-shell_sort.c","path":"100-shell_sort.c","contentType":"file"},{"name":"101-O","path":"101-O","contentType":"file"},{"name":"101-cocktail_sort_list.c","path":"101-cocktail_sort_list.c","contentType":"file"},{"name":"102-O","path":"102-O","contentType":"file"},{"name":"102-counting_sort.c","path":"102-counting_sort.c","contentType":"file"},{"name":"103-O","path":"103-O","contentType":"file"},{"name":"103-merge_sort.c","path":"103-merge_sort.c","contentType":"file"},{"name":"104-O","path":"104-O","contentType":"file"},{"name":"104-heap_sort.c","path":"104-heap_sort.c","contentType":"file"},{"name":"2-O","path":"2-O","contentType":"file"},{"name":"2-selection_sort.c","path":"2-selection_sort.c","contentType":"file"},{"name":"3-O","path":"3-O","contentType":"file"},{"name":"3-quick_sort.c","path":"3-quick_sort.c","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"print_array.c","path":"print_array.c","contentType":"file"},{"name":"print_list.c","path":"print_list.c","contentType":"file"},{"name":"sort.h","path":"sort.h","contentType":"file"}],"totalCount":21}},"fileTreeProcessingTime":3.635202,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":668421481,"defaultBranch":"master","name":"sorting_algorithms","ownerLogin":"Moschifire","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-07-19T19:09:22.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/110900056?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1689795420.0","canEdit":false,"refType":"branch","currentOid":"2038e06152630a38a1bc429877b33a68c4614e1f"},"path":"103-merge_sort.c","currentUser":null,"blob":{"rawLines":["/*"," * File: 103-merge_sort.c"," * Auth: Mark Oladeinde"," */","","#include \"sort.h\"","","void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back);","void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);","void merge_sort(int *array, size_t size);","","/**"," * merge_subarr - Sort a subarray of integers."," * @subarr: A subarray of an array of integers to sort."," * @buff: A buffer to store the sorted subarray."," * @front: The front index of the array."," * @mid: The middle index of the array."," * @back: The back index of the array."," */","void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back)","{","\tsize_t i, j, k = 0;","","\tprintf(\"Merging...\\n[left]: \");","\tprint_array(subarr + front, mid - front);","","\tprintf(\"[right]: \");","\tprint_array(subarr + mid, back - mid);","","\tfor (i = front, j = mid; i < mid && j < back; k++)","\t\tbuff[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];","\tfor (; i < mid; i++)","\t\tbuff[k++] = subarr[i];","\tfor (; j < back; j++)","\t\tbuff[k++] = subarr[j];","\tfor (i = front, k = 0; i < back; i++)","\t\tsubarr[i] = buff[k++];","","\tprintf(\"[Done]: \");","\tprint_array(subarr + front, back - front);","}","","/**"," * merge_sort_recursive - Implement the merge sort algorithm through recursion."," * @subarr: A subarray of an array of integers to sort."," * @buff: A buffer to store the sorted result."," * @front: The front index of the subarray."," * @back: The back index of the subarray."," */","void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back)","{","\tsize_t mid;","","\tif (back - front > 1)","\t{","\t\tmid = front + (back - front) / 2;","\t\tmerge_sort_recursive(subarr, buff, front, mid);","\t\tmerge_sort_recursive(subarr, buff, mid, back);","\t\tmerge_subarr(subarr, buff, front, mid, back);","\t}","}","","/**"," * merge_sort - Sort an array of integers in ascending order using the merge"," *\t\tsort algorithm."," * @array: An array of integers."," * @size: The size of the array."," *"," * Description: Implements the top-down merge sort algorithm."," */","void merge_sort(int *array, size_t size)","{","\tint *buff;","","\tif (array == NULL || size < 2)","\t\treturn;","","\tbuff = malloc(sizeof(int) * size);","\tif (buff == NULL)","\t\treturn;","","\tmerge_sort_recursive(array, buff, 0, size);","","\tfree(buff);","}"],"stylingDirectives":[[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":25,"cssClass":"pl-c"}],[{"start":0,"end":23,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":17,"cssClass":"pl-en"},{"start":18,"end":21,"cssClass":"pl-smi"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":29,"cssClass":"pl-s1"},{"start":31,"end":34,"cssClass":"pl-smi"},{"start":35,"end":36,"cssClass":"pl-c1"},{"start":36,"end":40,"cssClass":"pl-s1"},{"start":42,"end":48,"cssClass":"pl-smi"},{"start":49,"end":54,"cssClass":"pl-s1"},{"start":56,"end":62,"cssClass":"pl-smi"},{"start":63,"end":66,"cssClass":"pl-s1"},{"start":68,"end":74,"cssClass":"pl-smi"},{"start":75,"end":79,"cssClass":"pl-s1"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":25,"cssClass":"pl-en"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":37,"cssClass":"pl-s1"},{"start":39,"end":42,"cssClass":"pl-smi"},{"start":43,"end":44,"cssClass":"pl-c1"},{"start":44,"end":48,"cssClass":"pl-s1"},{"start":50,"end":56,"cssClass":"pl-smi"},{"start":57,"end":62,"cssClass":"pl-s1"},{"start":64,"end":70,"cssClass":"pl-smi"},{"start":71,"end":75,"cssClass":"pl-s1"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":19,"cssClass":"pl-smi"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":21,"end":26,"cssClass":"pl-s1"},{"start":28,"end":34,"cssClass":"pl-smi"},{"start":35,"end":39,"cssClass":"pl-s1"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":40,"cssClass":"pl-c"}],[{"start":0,"end":39,"cssClass":"pl-c"}],[{"start":0,"end":38,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":17,"cssClass":"pl-en"},{"start":18,"end":21,"cssClass":"pl-smi"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":29,"cssClass":"pl-s1"},{"start":31,"end":34,"cssClass":"pl-smi"},{"start":35,"end":36,"cssClass":"pl-c1"},{"start":36,"end":40,"cssClass":"pl-s1"},{"start":42,"end":48,"cssClass":"pl-smi"},{"start":49,"end":54,"cssClass":"pl-s1"},{"start":56,"end":62,"cssClass":"pl-smi"},{"start":63,"end":66,"cssClass":"pl-s1"},{"start":68,"end":74,"cssClass":"pl-smi"},{"start":75,"end":79,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":30,"cssClass":"pl-s"}],[{"start":1,"end":12,"cssClass":"pl-en"},{"start":13,"end":19,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":22,"end":27,"cssClass":"pl-s1"},{"start":29,"end":32,"cssClass":"pl-s1"},{"start":33,"end":34,"cssClass":"pl-c1"},{"start":35,"end":40,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":19,"cssClass":"pl-s"}],[{"start":1,"end":12,"cssClass":"pl-en"},{"start":13,"end":19,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":22,"end":25,"cssClass":"pl-s1"},{"start":27,"end":31,"cssClass":"pl-s1"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":34,"end":37,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":15,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":21,"end":24,"cssClass":"pl-s1"},{"start":26,"end":27,"cssClass":"pl-s1"},{"start":28,"end":29,"cssClass":"pl-c1"},{"start":30,"end":33,"cssClass":"pl-s1"},{"start":34,"end":36,"cssClass":"pl-c1"},{"start":37,"end":38,"cssClass":"pl-s1"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":41,"end":45,"cssClass":"pl-s1"},{"start":47,"end":48,"cssClass":"pl-s1"},{"start":48,"end":50,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":19,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":25,"end":31,"cssClass":"pl-s1"},{"start":32,"end":33,"cssClass":"pl-s1"},{"start":38,"end":44,"cssClass":"pl-s1"},{"start":45,"end":46,"cssClass":"pl-s1"},{"start":46,"end":48,"cssClass":"pl-c1"},{"start":52,"end":58,"cssClass":"pl-s1"},{"start":59,"end":60,"cssClass":"pl-s1"},{"start":60,"end":62,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":15,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":18,"end":20,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":20,"cssClass":"pl-s1"},{"start":21,"end":22,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-s1"},{"start":19,"end":21,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":20,"cssClass":"pl-s1"},{"start":21,"end":22,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":15,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":21,"end":22,"cssClass":"pl-c1"},{"start":24,"end":25,"cssClass":"pl-s1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":28,"end":32,"cssClass":"pl-s1"},{"start":34,"end":35,"cssClass":"pl-s1"},{"start":35,"end":37,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-s1"},{"start":20,"end":22,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":18,"cssClass":"pl-s"}],[{"start":1,"end":12,"cssClass":"pl-en"},{"start":13,"end":19,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":22,"end":27,"cssClass":"pl-s1"},{"start":29,"end":33,"cssClass":"pl-s1"},{"start":34,"end":35,"cssClass":"pl-c1"},{"start":36,"end":41,"cssClass":"pl-s1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":79,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":41,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":25,"cssClass":"pl-en"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":37,"cssClass":"pl-s1"},{"start":39,"end":42,"cssClass":"pl-smi"},{"start":43,"end":44,"cssClass":"pl-c1"},{"start":44,"end":48,"cssClass":"pl-s1"},{"start":50,"end":56,"cssClass":"pl-smi"},{"start":57,"end":62,"cssClass":"pl-s1"},{"start":64,"end":70,"cssClass":"pl-smi"},{"start":71,"end":75,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":11,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":17,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-c1"}],[],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":29,"cssClass":"pl-s1"},{"start":33,"end":34,"cssClass":"pl-c1"}],[{"start":2,"end":22,"cssClass":"pl-en"},{"start":23,"end":29,"cssClass":"pl-s1"},{"start":31,"end":35,"cssClass":"pl-s1"},{"start":37,"end":42,"cssClass":"pl-s1"},{"start":44,"end":47,"cssClass":"pl-s1"}],[{"start":2,"end":22,"cssClass":"pl-en"},{"start":23,"end":29,"cssClass":"pl-s1"},{"start":31,"end":35,"cssClass":"pl-s1"},{"start":37,"end":40,"cssClass":"pl-s1"},{"start":42,"end":46,"cssClass":"pl-s1"}],[{"start":2,"end":14,"cssClass":"pl-en"},{"start":15,"end":21,"cssClass":"pl-s1"},{"start":23,"end":27,"cssClass":"pl-s1"},{"start":29,"end":34,"cssClass":"pl-s1"},{"start":36,"end":39,"cssClass":"pl-s1"},{"start":41,"end":45,"cssClass":"pl-s1"}],[],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":76,"cssClass":"pl-c"}],[{"start":0,"end":19,"cssClass":"pl-c"}],[{"start":0,"end":32,"cssClass":"pl-c"}],[{"start":0,"end":32,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":61,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":19,"cssClass":"pl-smi"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":21,"end":26,"cssClass":"pl-s1"},{"start":28,"end":34,"cssClass":"pl-smi"},{"start":35,"end":39,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":26,"cssClass":"pl-s1"},{"start":27,"end":28,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":14,"cssClass":"pl-en"},{"start":15,"end":21,"cssClass":"pl-k"},{"start":22,"end":25,"cssClass":"pl-smi"},{"start":27,"end":28,"cssClass":"pl-c1"},{"start":29,"end":33,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":21,"cssClass":"pl-en"},{"start":22,"end":27,"cssClass":"pl-s1"},{"start":29,"end":33,"cssClass":"pl-s1"},{"start":35,"end":36,"cssClass":"pl-c1"},{"start":38,"end":42,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-en"},{"start":6,"end":10,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Moschifire/sorting_algorithms/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Moschifire/sorting_algorithms/security/dependabot","repoSecurityAndAnalysisPath":"/Moschifire/sorting_algorithms/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"103-merge_sort.c","displayUrl":"https://github.com/Moschifire/sorting_algorithms/blob/master/103-merge_sort.c?raw=true","headerInfo":{"blobSize":"2.15 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"ede4c0d","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FMoschifire%2Fsorting_algorithms%2Fblob%2Fmaster%2F103-merge_sort.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"85","truncatedSloc":"71"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/Moschifire/sorting_algorithms/discussions/new","newIssuePath":"/Moschifire/sorting_algorithms/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Moschifire/sorting_algorithms/blob/master/103-merge_sort.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Moschifire/sorting_algorithms/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/Moschifire/sorting_algorithms/raw/master/103-merge_sort.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Moschifire","repoName":"sorting_algorithms","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"merge_subarr","kind":"function","identStart":82,"identEnd":94,"extentStart":82,"extentEnd":157,"fullyQualifiedName":"merge_subarr","identUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":17}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":80}}},{"name":"merge_sort_recursive","kind":"function","identStart":164,"identEnd":184,"extentStart":164,"extentEnd":235,"fullyQualifiedName":"merge_sort_recursive","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":25}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":76}}},{"name":"merge_sort","kind":"function","identStart":242,"identEnd":252,"extentStart":242,"extentEnd":277,"fullyQualifiedName":"merge_sort","identUtf16":{"start":{"lineNumber":9,"utf16Col":5},"end":{"lineNumber":9,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":9,"utf16Col":5},"end":{"lineNumber":9,"utf16Col":40}}},{"name":"merge_subarr","kind":"function","identStart":565,"identEnd":577,"extentStart":565,"extentEnd":640,"fullyQualifiedName":"merge_subarr","identUtf16":{"start":{"lineNumber":19,"utf16Col":5},"end":{"lineNumber":19,"utf16Col":17}},"extentUtf16":{"start":{"lineNumber":19,"utf16Col":5},"end":{"lineNumber":19,"utf16Col":80}}},{"name":"merge_sort_recursive","kind":"function","identStart":1432,"identEnd":1452,"extentStart":1432,"extentEnd":1503,"fullyQualifiedName":"merge_sort_recursive","identUtf16":{"start":{"lineNumber":49,"utf16Col":5},"end":{"lineNumber":49,"utf16Col":25}},"extentUtf16":{"start":{"lineNumber":49,"utf16Col":5},"end":{"lineNumber":49,"utf16Col":76}}},{"name":"merge_sort","kind":"function","identStart":1976,"identEnd":1986,"extentStart":1976,"extentEnd":2011,"fullyQualifiedName":"merge_sort","identUtf16":{"start":{"lineNumber":70,"utf16Col":5},"end":{"lineNumber":70,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":70,"utf16Col":5},"end":{"lineNumber":70,"utf16Col":40}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/Moschifire/sorting_algorithms/branches":{"post":"7WLNBa1eIqvohxCaEGPKqmptAPmY2rZyrQHw88fZI5COClpGBRoQjKgfUhkQXE35Grqf0huozsEZqcZuMM3Ziw"},"/repos/preferences":{"post":"4Os8S5-akP1mlBplVrc6LS0UGUvDG7ss2_dAgQyz74d5nc1tTIaJ3NEpnZIO-kOK3qeivrKXxZzF92zGV-frIg"}}},"title":"sorting_algorithms/103-merge_sort.c at master · Moschifire/sorting_algorithms"}